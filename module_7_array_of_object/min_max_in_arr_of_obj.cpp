#include <bits/stdc++.h>;
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;

    void getAllData()
    {
        cout << "Name: " << this->name << " roll: " << this->roll << " Marks: " << this->marks << endl;
    }
};

main()
{
    int n;
    cin >> n;
    Student arr[n];

    for (int i = 0; i < n; i++)
    {
        cin.ignore();
        getline(cin, arr[i].name);
        cin >> arr[i].roll >> arr[i].marks;
    }

    Student minRollObj;
    minRollObj.roll = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i].roll < minRollObj.roll)
        {
            minRollObj = arr[i];
        }
    }

    cout << minRollObj.name << " has the minimum roll " << minRollObj.roll << endl;

    return 0;
}