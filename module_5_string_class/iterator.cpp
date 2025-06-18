#include <bits/stdc++.h>;
using namespace std;

int main()
{
    string s;
    // cin >> s;        // input without space
    getline(cin, s); // input with space

    cout << "First char: " << *s.begin() << "\n";    // First char
    cout << "Last char: " << *(s.end() - 1) << "\n"; // Last char

    // Traverse with index
    // for (int i = 0; i < s.size(); i++)
    // {
    //     cout << s[i] << endl;
    // }
    // cout << endl;

    // Traverse with iterator (for learning for  future DSA)
    // for (string::iterator it = s.begin(); it < s.end(); it++)
    // {
    // use auto instead string::iterator after 11 version of c++
    for (auto it = s.begin(); it < s.end(); it++)
    {
        cout << *it << endl;
    }
    return 0;
}