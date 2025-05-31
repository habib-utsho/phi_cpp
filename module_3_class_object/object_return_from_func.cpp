#include <bits/stdc++.h>;
using namespace std;



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

Student utshoFunc(int roll, int age, double gpa){
    Student utsho(roll, age, gpa);
    return utsho;
}

int main(){
    Student utsho = utshoFunc(29 , 25, 3.88);


    cout  << " Roll: " << utsho.roll << " Age: " << utsho.age << " GPA: " << utsho.gpa << endl;


    
    return 0;
}
