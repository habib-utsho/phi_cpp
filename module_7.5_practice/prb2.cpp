#include <bits/stdc++.h>;
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;
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

    reverse(students, students + t);
    for (int i = 0; i < t; i++)
    {
        cout << students[i].name << " " << students[i].roll << " " << students[i].marks << endl;
    }

    return 0;
}