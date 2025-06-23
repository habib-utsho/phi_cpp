#include <bits/stdc++.h>;
using namespace std;

int main()
{
    string s;
    cin >> s;
    int arr[5] = {0};
    for (char c : s)
    {
        if (c == 'e' || c == 'E')
        {
            arr[0]++;
        }
        else if (c == 'g' || c == 'G')
        {
            arr[1]++;
        }
        else if (c == 'y' || c == 'Y')
        {
            arr[2]++;
        }
        else if (c == 'p' || c == 'P')
        {
            arr[3]++;
        }
        else if (c == 't' || c == 'T')
        {
            arr[4]++;
        }
    }


    int size = sizeof(arr) / sizeof(arr[0]);
    int minVal = *min_element(arr, arr + size);
    cout << minVal << endl;
    return 0;
}