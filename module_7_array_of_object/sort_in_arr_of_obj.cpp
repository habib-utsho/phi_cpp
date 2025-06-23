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

// Custom compare function
bool cmpFunc(Student l, Student r)
{
    if (l.roll < r.roll)
    {
        return true;
    }
    else
    {
        return false;
    }
}

main()
{
    int n;
    cin >> n;
    Student students[n];

    for (int i = 0; i < n; i++)
    {
        cin.ignore();
        getline(cin, students[i].name);
        cin >> students[i].roll >> students[i].marks;
    }
    sort(students, students + n, cmpFunc);
    for (int i = 0; i < n; i++)
    {
        students[i].getAllData();
    }

    // cout << minRollObj.name << " has the minimum roll " << minRollObj.roll << endl;

    return 0;
}