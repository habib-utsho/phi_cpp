#include <bits/stdc++.h>;
using namespace std;



// Not too much useful. if else is more easy to read.

int main(){

    int day;
    cin >> day;


    // Check day
    switch(day){
        case 1: {
            cout << "Saturday" << endl;
            break;
        }
        case 2: {
            cout << "Sunday" << endl;
            break;
        }
        case 3: {
            cout << "Monday" << endl;
            break;
        }
        default: {
            cout << "Default" << endl;
        }
    }



    // Check even or odd
    int x;
    cin >> x;
    switch(x%2){
        case 0: 
        cout << "Even" << endl;
        break;
        case 1: 
        cout << "Odd" << endl;
    }

    return 0;
}