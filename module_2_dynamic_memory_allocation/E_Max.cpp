#include <bits/stdc++.h>;
using namespace std;

int main(){
    int n;
    cin>> n;
     int a[n];
 
    for(int i = 0; i<n;  i++){
        cin >> a[i];
    }

    
     int maxVal = a[0];
    for(int i = 0; i<n;  i++){
        maxVal = max(maxVal, a[i]);
    }
    cout<<maxVal;
    return 0;
}