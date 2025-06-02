#include <bits/stdc++.h>;
using namespace std;

class Student
{
public:
    int id;
    char name[101];
    char section;
    int totalMark;
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        Student a, b, c;
        cin >> a.id >> a.name >> a.section >> a.totalMark;
        cin >> b.id >> b.name >> b.section >> b.totalMark;
        cin >> c.id >> c.name >> c.section >> c.totalMark;
        // cout << a.totalMark << b.totalMark << c.totalMark <<endl;
        // if(a.totalMark == b.totalMark == c.totalMark){
        //     if(a.id< )
        // }
        // cout << b.name << " :" << b.totalMark << " -  " << c.name << " :"  << c.totalMark <<endl;
        if (a.totalMark > b.totalMark && a.totalMark > c.totalMark)
        {
            cout << a.id << " " << a.name << " " << a.section << " " << a.totalMark << endl;
        }
        else if (b.totalMark > a.totalMark && b.totalMark > c.totalMark)
        {
            //   cout << b.name << " :" << b.totalMark << " -  " << c.name << " :"  << c.totalMark <<endl;

            cout << b.id << " " << b.name << " " << b.section << " " << b.totalMark << endl;
        }
        else if (c.totalMark > a.totalMark && c.totalMark > b.totalMark)
        {
            cout << c.id << " " << c.name << " " << c.section << " " << c.totalMark << endl;
        }
        else if (a.totalMark == b.totalMark || a.totalMark == c.totalMark)
        {
            if (a.id < b.id)
            {
                cout << a.id << " " << a.name << " " << a.section << " " << a.totalMark << endl;
            }
            else if (a.id < c.id)
            {
                cout << a.id << " " << a.name << " " << a.section << " " << a.totalMark << endl;
            }
            else
            {
                if (b.id < a.id && b.id < c.id)
                {
                    cout << b.id << " " << b.name << " " << b.section << " " << b.totalMark << endl;
                }
                else
                {

                    cout << c.id << " " << c.name << " " << c.section << " " << c.totalMark << endl;
                }
            }
        }
        else if (b.totalMark == c.totalMark)
        {
            if (b.id < c.id)
            {
                cout << b.id << " " << b.name << " " << b.section << " " << b.totalMark << endl;
            }
            else
            {
                cout << c.id << " " << c.name << " " << c.section << " " << c.totalMark << endl;
            }
        }

        // cout << endl;
    }
    return 0;
}