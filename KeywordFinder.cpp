#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

/**
 * @brief Divides text into parts separated by a given character
 * @param text - the text to be split into parts
 * @param delimiter - the character that will separate parts of the text
 * @return vector<string> containing parts of the original test
 */
vector<string> separate(const string &text, const char &delimiter) {
    int pos_start = 0, pos_end;
    string part;
    vector<string> res;

    while ((pos_end = text.find(delimiter, pos_start)) != string::npos) {
        part = text.substr(pos_start, pos_end - pos_start);
        pos_start = pos_end + 1;
        res.push_back(part);
    }
    res.push_back(text.substr(pos_start));
    return res;
}


/**
 * @brief Connects parts of text into one string with a given separator
 * @param parts - vector consisting of parts to be connected together
 * @param delimiter - the character that will stand between parts of the string
 * @return string containing connected parts
 */

string join(const vector<string> &parts, const char &delimiter) {
    string res;
    for (int i = 0; i < parts.size(); i++) {
        res += parts[i];
        if (i != parts.size() - 1) {
            res += delimiter;
        }
    }
    return res;
}

/**
 * @brief Changes the case to uppercase
 * @param word - text to change case
 */
void highlight(string &word) {
    for (char &c: word) c = (char) toupper(c);
}

/**
 * @brief Searches for all sentences that contain a keyword, and highlights these keywords.
 * @param all_sentences - vector in which to search for the keyword
 * @param keyword - the keyword to be found and highlighted, case sensitive
 * @return vector with highlighted words; if not found, then empty vector
 */
vector<string> search(const vector<string> &all_sentences, const string &keyword) {
    vector<string> res;
    for (const string &sentence : all_sentences) {
        bool keyword_found = false;
        vector<string> words = separate(sentence, ' ');
        for (string &word : words) {
            if (word == keyword) {
                keyword_found = true;
                highlight(word);
            }
        }
        if (keyword_found) res.push_back(join(words, ' '));
    }
    return res;
}


int main() {
    ifstream in("in.txt");
    ofstream out("out.txt");
    string text;
    getline(in, text);
    vector<string> sentences = separate(text, '.');
    int n;
    in >> n;
    for (int i = 0; i < n; i++) {
        string keyword;
        in >> keyword;
        vector<string> res = search(sentences, keyword);
        out << res.size() << " " << join(res, '.') + '.' << endl;
    }
    in.close();
    out.close();
    return 0;
}