#include <bits/stdc++.h>;
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;
};

bool sortFunc(Student l, Student r)
{
    if (l.marks > r.marks)
    {
        return true;
    }
    else if (l.marks < r.marks)
    {
        return false;
    }
    else
    {
        return l.roll < r.roll;
    }
};

int main()
{
    int t;
    cin >> t;
    Student students[t];

    for (int i = 0; i < t; i++)
    {
        cin >> students[i].name >> students[i].roll >> students[i].marks;
    }

    sort(students, students + t, sortFunc);
    for (int i = 0; i < t; i++)
    {
        cout << students[i].name << " " << students[i].roll << " " << students[i].marks << endl;
    }

    return 0;
}