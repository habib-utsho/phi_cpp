#include <bits/stdc++.h>;
using namespace std;

int main()
{
    // To breakdown every word from a sentence
    string s;
    getline(cin, s);
    stringstream ss(s);
    string word;
    ss >> word;
    cout << word << endl;
    ss >> word;
    cout << word << endl;
    return 0;
}