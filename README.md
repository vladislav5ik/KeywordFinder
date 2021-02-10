# Keyword Finder
### What's this?
This program searches for keywords in the text. You can pass keywords to it for search, and it will return you the sentences you need with highlighted keywords.

### Usage
  - Put the file `in.txt` in the folder with the program
    - The first line contains the text in which the search for words will be carried out *(Note: must be listed through **dots**)*
    - The second line contains the number of requests `N` you want to make
    - The next `N` lines contain one keyword each, by which the search will be carried out
  - Run the program source file. Magic happens.
  - You will see the file `out.txt` in the program folder, which contains the search results. Open up quickly! 
    - You will see `N` lines, each of them contains the number of sentences in which a word was found. After the number on the same line will be sentences with highlighted words.
- Now you can erase the contents of the `in.txt` file and run the program again. Pleasant use, I hope you enjoy this program!
### Example
**in.txt**
```
Lorem Ipsum is simply a dummy text of the printing and typesetting industry. Lorem Ipsum has been the industry’s standard dummy text ever since the 1500s, when an unknown printer took a galley of type and scrambled it to make a type specimen book. It has survived not only five centuries, but also the leap into electronic typesetting, remaining essentially unchanged. It was popularised in the 1960s with the release of Letraset sheets containing Lorem Ipsum passages, and more recently with desktop publishing software like Aldus PageMaker including versions of Lorem Ipsum.
2
dummy
release
```
**out.txt**
```
2 Lorem Ipsum is simply a DUMMY text of the printing and typesetting industry. Lorem Ipsum has been the industry's standard DUMMY text ever since the 1500s, when an unknown printer took a galley of type and scrambled it to make a type specimen book.
1 It was popularised in the 1960s with the RELEASE of Letraset sheets containing Lorem Ipsum passages, and more recently with desktop publishing software like Aldus PageMaker including versions of Lorem Ipsum.
```
