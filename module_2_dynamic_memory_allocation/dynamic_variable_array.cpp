#include <bits/stdc++.h>
using namespace std;


int main(){

    // Dynamic variable
    int *p = new int;
    cin >> *p;
    cout << *p << endl;

    // Dynamic array
    int *arr = new int[*p];
    for(int i = 0 ; i<*p; i++){
        cin >> arr[i];
    }
    for(int i = 0 ; i<*p; i++){
        cout << arr[i] << " ";
    }
}
