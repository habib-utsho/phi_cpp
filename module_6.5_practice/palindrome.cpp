#include <bits/stdc++.h>;
using namespace std;

int main()
{
    string s;
    cin >> s;
    int firstInd = 0;
    int lastInd = s.size() - 1;

    // cout << *s.begin() << " " << *(s.end() - 1) << endl;
    bool isPalindrome = true;
    while (firstInd < lastInd)
    {
        if (s[firstInd] != s[lastInd])
        {
            isPalindrome = false;
            break;
        }
        firstInd++;
        lastInd--;
    }
    if (isPalindrome)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}