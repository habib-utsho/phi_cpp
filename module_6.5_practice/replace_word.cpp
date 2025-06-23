#include <bits/stdc++.h>;
using namespace std;

int main()
{
    string s;
    cin >> s;

    string egypt = "EGYPT";
    char e = 'e';
    char E = 'E';
    for (int i = 0; i < s.size(); i++)
    {
        bool isEgypt = true;

        for (int j = 0; j < egypt.size(); j++)
        {
            // cout << egypt[j] << ": " << s[i + j] << endl;
            if (egypt[j] != s[i + j])
            {
                isEgypt = false;
                break;
            }
        }

        if (isEgypt)
        {
            s.replace(i, 5, " ");
            isEgypt = true;
        }
    }

    cout << s << endl;

    return 0;
}