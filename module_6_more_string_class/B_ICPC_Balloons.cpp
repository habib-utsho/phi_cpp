#include <bits/stdc++.h>;
using namespace std;

int main()
{
    int t;
    cin >> t;
    // cout << t << endl;
    while (t--)
    {

        int size, totalBallon = 0;
        string s;
        cin >> size;
        cin >> s;
        int arr[26] = {0};


        for (int i = 0; i < size; i++)
        {
            int ind = s[i] - 65;
            // cout << "char: " << s[i] << " ind: " << ": " << ind << ", value: " << arr[ind] << endl;
            if (arr[ind] == 0)
            {
                totalBallon += 2;
            }
            else
            {
                totalBallon++;
            }
            arr[ind]++;
        }

        cout << totalBallon << endl;
    }
    return 0;
}