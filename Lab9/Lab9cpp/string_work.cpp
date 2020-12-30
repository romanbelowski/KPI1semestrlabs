#include <string>

using namespace std;

int countWords(const string &str, const string &delim) {
    int count = 0;

    size_t start, end = 0;
    while (end < str.size()) {
        start = end;
        while (start < str.size() && (delim.find(str[start]) != string::npos)) {
            start++;
        }
        end = start;
        while (end < str.size() && (delim.find(str[end]) == string::npos)) {
            end++;
        }
        if (end - start != 0) {

            ++count;
        }
    }
    return count;
}

string *split(const string &str, const string &delim, int wordsCount) {
    string *words = new string[wordsCount]();
    int currIndex = 0;

    size_t start, end = 0;
    while (end < str.size()) {
        start = end;
        while (start < str.size() && (delim.find(str[start]) != string::npos)) {
            start++;
        }
        end = start;
        while (end < str.size() && (delim.find(str[end]) == string::npos)) {
            end++;
        }
        if (end - start != 0) {
            words[currIndex++] = string(str, start, end - start);
        }
    }
    return words;
}

string* getDeleteWords(const string* words, const string deleteChars, const int wordsCount, int& wordsToDeleteCount){
    wordsToDeleteCount = 0;
    string *temp = new string[wordsCount]();

    size_t foundIndex = 0;
    for (int i = 0; i < wordsCount; i++) {
        string currWord = words[i];
        int wordLen = currWord.length();

        foundIndex = currWord.find(deleteChars, 0);

        while (foundIndex != std::string::npos) {
            if (wordLen - foundIndex == deleteChars.length()) {
                temp[wordsToDeleteCount++] = currWord;
            }

            foundIndex = currWord.find(deleteChars, foundIndex + 1);
        }
    }

    string *wordsToDelete = new string[wordsToDeleteCount]();
    for(int i = 0; i < wordsToDeleteCount; i++){
        wordsToDelete[i] = temp[i];
    }

    delete[] temp;
    return wordsToDelete;
}

int removeWord(string &str, const string &delim, string deleteWord) {
    int deleteCount = 0;


    size_t start, end = 0;
    while (end < str.size()) {
        start = end;
        while (start < str.size() && (delim.find(str[start]) != string::npos)) {
            start++;
        }
        end = start;
        while (end < str.size() && (delim.find(str[end]) == string::npos)) {
            end++;
        }

        string currWord = string(str, start, end - start);
        if (currWord == deleteWord) {
            str.replace(start, end, "");
            end = start;
            ++deleteCount;
        }
    }
    return deleteCount;
}