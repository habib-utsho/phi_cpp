#include <bits/stdc++.h>;
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, sum;
        cin >> n >> sum;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        // for (int i = 0; i < n; i++)
        // {
        //     cout << arr[i];
        // }

        bool isMatchSum = false;
        for (int i = 0; i < n; i++)
        {

            for (int j = i + 1; j < n; j++)
            {
                for (int k = j + 1; k < n; k++)
                {
                    if (arr[i] + arr[j] + arr[k] == sum)
                    {

                        isMatchSum = true;
                        i = n;
                        j = n;
                        break;
                    }
                }
            }
        }

        if (isMatchSum)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}