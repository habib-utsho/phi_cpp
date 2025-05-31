#include <bits/stdc++.h>;
using namespace std;


// this keyword is a pointer

class Student{
    public: 
    int roll;
    int age;
    double gpa;

    Student( int roll, int age, double gpa){
        this->roll = roll;
        (*this).age = age;
        this->gpa = gpa;
    }
};


int main(){
    Student utsho( 29 , 25, 3.88);


    cout  << " Roll: " << utsho.roll << " Age: " << utsho.age << " GPA: " << utsho.gpa << endl;


    
    return 0;
}