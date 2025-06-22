#include <bits/stdc++.h>;
using namespace std;

int main()
{
    // To breakdown every word from a sentence
    // For word by word print
    string s;
    getline(cin, s);
    stringstream ss(s);
    string word;
    // ss >> word : Here stringstream giving first word to word string
    int totalWord;
    while (ss >> word)
    {
        cout << word << endl;
        totalWord++;
    }
    cout << "Total word: " << totalWord << endl;
    return 0;
}