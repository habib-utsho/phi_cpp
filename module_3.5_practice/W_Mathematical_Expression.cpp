#include <bits/stdc++.h>;
using namespace std;

int main(){
    int a, b, c;
    char symbol, equal;
    cin >> a >> symbol  >> b >> equal >> c;
    if(symbol == '+'){
        if( a + b == c){
            cout<<"Yes";
        } else{
            cout<< a + b;
        }
    } else if(symbol == '-'){
        if( a - b == c){
            cout<<"Yes";
        } else{
            cout<< a - b;
        }
    } else if(symbol == '*'){
        if( a * b == c){
            cout<<"Yes";
        } else{
            cout<<a * b;
        }
    }
    return 0;
}