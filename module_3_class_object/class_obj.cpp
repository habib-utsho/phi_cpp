#include <bits/stdc++.h>;
using namespace std;

class Student{
    public: 
    char name[100];
    int roll;
    int age;
    double gpa;

    // Student( int r, int a, double g){
    //     roll = r;
    //     age = a;
    //     gpa = g;
    // }
};


int main(){
    Student utsho;
    Student rupom;
    // Student withConstructor( 2, 27, 3.68);

    // char temp[100] = "Utsho";
    // strcpy(utsho.name, temp);

    cin.getline(utsho.name, 100);
    cin  >> utsho.roll >> utsho.age >> utsho.gpa;

    cin.ignore();
    cin.getline(rupom.name, 100);
    cin >> rupom.roll >> rupom.age >> rupom.gpa;

    cout << "Name: " << utsho.name << " Roll: " << utsho.roll << " Age: " << utsho.age << " GPA: " << utsho.gpa << endl;
    cout << "Name: " << rupom.name << " Roll: " << rupom.roll << " Age: " << rupom.age << " GPA: " << rupom.gpa << endl;


    
    return 0;
}