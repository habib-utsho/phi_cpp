#include <bits/stdc++.h>;
using namespace std;

void myFunc()
{
    char c;
    int count;
    cin >> count >> c;
    for (int i = 0; i < count; i++)
    {
        cout << c << " ";
    }
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        myFunc();
    }
    return 0;
}