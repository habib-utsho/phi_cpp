#include <bits/stdc++.h>;
using namespace std;

int* sort_it(int n){
    
    int* arrPtr = new int[n]; 
        for(int i = 0; i<n; i++){
            cin >> arrPtr[i];
        }
        sort(arrPtr, arrPtr+n, greater<int>());
        return arrPtr;
}

int main(){
          int n;
        cin >> n;

        int* sortedArr = sort_it(n);

        for(int i = 0; i<n; i++){
            cout << sortedArr[i] << " ";
        }

    return 0;
}