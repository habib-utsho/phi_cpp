#include <bits/stdc++.h>;
using namespace std;

int main(){
    char symbol;
    int a, b;
    cin >> a >> symbol >> b;

    if(symbol == '>' ){
        if( a > b){
            cout << "Right";
        } else {
            cout << "Wrong";
        }
    } else if(symbol == '<' ){
        if( a < b){
            cout << "Right";
        } else {
            cout << "Wrong";
        }
    }  else if(symbol == '=' ){
        if( a == b){
            cout << "Right";
        } else {
            cout << "Wrong";
        }
    }

    return 0;
}