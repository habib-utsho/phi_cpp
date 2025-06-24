#include <bits/stdc++.h>;
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int size;
        cin >> size;
        int arr[size];
        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }

        if (size % 2 != 0)
        {
            cout << -1 << endl;
            continue;
        }

        int freq[2] = {0};
        for (int i = 0; i < size; i++)
        {
            if (arr[i] % 2 == 0)
            {
                freq[0]++;
            }
            else
            {
                freq[1]++;
            }
        }
        
        // cout << endl;
        if (freq[0] == freq[1])
        {
            cout << 0 << endl;
        }
        else
        {

            int x = freq[0] == 0 ? freq[1] / 2 : freq[1] == 0    ? freq[0] / 2
                                             : freq[0] > freq[1] ? (freq[0] - freq[1]) / 2
                                                                 : (freq[1] - freq[0]) / 2;
            cout << x << endl;
        }

        // cout << freq[0] << " - " << freq[1] << endl;
    }
    return 0;
}