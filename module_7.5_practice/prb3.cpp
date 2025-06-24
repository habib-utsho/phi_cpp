#include <bits/stdc++.h>;
using namespace std;

int main()
{
    string s, x;
    getline(cin, s);
    cin >> x;

    stringstream ss(s);
    string word;
    int wordMathCount;
    while (ss >> word)
    {
        if (word == x)
        {
            wordMathCount++;
        }
    }

    cout << wordMathCount << endl;

    return 0;
}