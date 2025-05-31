#include <bits/stdc++.h>;
using namespace std;

int main(){
    int n;
    cin>> n;
    int a[n];
 
    for(int i = 0; i<n;  i++){
        cin >> a[i];
    }
    int firstInd = 0;
    int lastInd = n-1;
    while(firstInd<lastInd){
        swap(a[firstInd], a[lastInd]);
        firstInd++;
        lastInd--;
    }
    for(int i = 0; i<n;  i++){
        cout << a[i] << " ";
    }

    return 0;
}