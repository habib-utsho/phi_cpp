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
        // cout << "Name: " << this->name << " roll: " << this->roll << " Marks: " << this->marks << endl;
        cout << " roll: " << this->roll << " Marks: " << this->marks << endl;
    }
};

// Custom compare function
bool cmpFunc(Student l, Student r)
{
    // if (l.marks < r.marks)
    // {
    //     return true;
    // }
    // else
    // {
    //     return false;
    // }
    ///////// Shortcut /////////
    // return l.marks < r.marks;

    // marks wise descending sort, if marks same, then roll wise ascending sort
    // if (l.marks > r.marks)
    // {
    //     return true;
    // }
    // else if (l.marks < r.marks)
    // {
    //     return false;
    // }
    // else
    // {
    //     return l.roll < r.roll;
    // }
    //////// Shortcut ////////
    return l.marks == r.marks ? l.roll < r.roll : l.marks > r.marks;
}

main()
{
    int n;
    cin >> n;
    Student students[n];

    // Get input
    for (int i = 0; i < n; i++)
    {
        cin.ignore();
        getline(cin, students[i].name);
        cin >> students[i].roll >> students[i].marks;
    }

    // Sort and output
    // marks wise descending sort, if marks same, then roll wise ascending sort
    sort(students, students + n, cmpFunc);
    for (int i = 0; i < n; i++)
    {
        students[i].getAllData();
    }

    // cout << minRollObj.name << " has the minimum roll " << minRollObj.roll << endl;

    return 0;
}