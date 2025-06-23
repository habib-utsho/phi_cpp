#include <bits/stdc++.h>;
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        string str;
        cin >> str;
        string firstPortion = str.substr(0, 3);
        string lastPortion = str.substr(3, 6);
        int firstSum = 0;
        for (int i = 0; i < 3; i++)
        {
            // cout << firstPortion[i] + 2 << endl;
            firstSum += (firstPortion[i] - 48);
        }
        int lastSum = 0;
        for (int i = 0; i < 3; i++)
        {
            lastSum += (lastPortion[i] - 48);
        }
        // cout << firstSum << " " << lastSum << endl;
        if (firstSum == lastSum)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }

        t--;
    }

    return 0;
}