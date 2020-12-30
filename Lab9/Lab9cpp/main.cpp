#include <string>
#include <iostream>
#include "string_work.h"

using namespace std;

string getStr(string);

int main() {
    string inputString = getStr("Input your string: ");
    string deleteChars = getStr("Input your delete chars: ");
    string delims = " ,.";
    int deleteCount = 0;

    int wordsCount = countWords(inputString, delims);
    string *words = split(inputString, delims, wordsCount);
    cout << "number of words: " << wordsCount << endl;

    int wordsToDeleteCount = 0;
    string *wordsToDelete = getDeleteWords(words, deleteChars, wordsCount, wordsToDeleteCount);

    for (int i = 0; i < wordsToDeleteCount; i++) {
        string currDeleteWord = wordsToDelete[i];
        deleteCount += removeWord(inputString, delims, currDeleteWord);
    }

    cout << "string after deletion is: ";
    cout << inputString;
    cout << "\ndelete count is: " << deleteCount;

}


string getStr(string title) {
    string s;
    cout << title;
    getline(cin, s);
    return s;
}