#include <bits/stdc++.h>
using namespace std;


int main(){

    // variable delete
    int *n = new int;
    cin>>*n;
    // delete n;
    cout<<"Size is: "<< *n << endl;

    int *arr = new int[*n];
    for(int i = 0;i<*n;i++){
        cin>>arr[i] ;
    }

    int *arr2 = new int[*n+2];
    for(int i = 0;i<*n;i++){
        arr2[i] = arr[i] ;
    }


    arr2[*n] = 69;
    arr2[*n+1] = 70;

    for(int i = 0;i<*n+2;i++){
        cout<<arr2[i] << " " ;
    }

}
