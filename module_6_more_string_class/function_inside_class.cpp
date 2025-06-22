#include <bits/stdc++.h>;
using namespace std;

class Teacher
{
public:
    string name;
    int age;
    Teacher(string name, int age)
    {
        // (*this).name = name;
        this->name = name;
        this->age = age;
    }
    void getTeacherAge()
    {
        cout << name << "'s age is " << age << endl;
    }
};

int main()
{
    Teacher hakim("Hakim Ahmed", 25);
    Teacher *rashed = new Teacher("Rashed Ahmed", 66);
    Teacher *kamal = new Teacher("Kamal Ahmed", 50);
    hakim.getTeacherAge();
    rashed->getTeacherAge();

    // Copy and delete (Dereference a pointer  and copy)
    *kamal = *rashed;
    delete rashed;
    kamal->getTeacherAge();
    return 0;
}