#include <bits/stdc++.h>;
using namespace std;

int main()
{

    // String constructor ****
    // string s("Hello Bangladesh"); // Hello Bangladesh
    // string s("Hello Bangladesh", 5); // Hello
    // string s = "Hello Bangladesh";
    // string ss(s, 5); //  Bangladesh
    // string s(5, 'S'); // SSSSS

    // Sort string ****
    string s = "helloworld";
    sort(s.begin(), s.end()); // dehllloorw
    cout << s << endl;

    // Range based for loop
    string ss = "hello";
    for (char s : ss)
    {
        cout << s << endl;
    }

    // Reverse string or array***
    // Array
    int arr[4] = {2, 66, 1, 1};
    reverse(arr, arr + 4);
    for (int i = 0; i < 4; i++)
    {
        cout << arr[i] << endl; // 1 1 66 2
    }

    // string
    string sss = "Utsho";
    reverse(sss.begin(), sss.end());
    cout << sss << endl; // ohstU

    return 0;
}