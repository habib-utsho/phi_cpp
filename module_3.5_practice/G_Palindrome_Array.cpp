#include <bits/stdc++.h>;
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }
    bool isPalindrome = true;
    int firstInd = 0;
    int lastInd  = n-1;
    while(firstInd<lastInd){
        
        if(arr[firstInd]!= arr[lastInd]){
            isPalindrome = false;
            break;
        } 
        firstInd++;
        lastInd--;
    }

    if(isPalindrome){
       cout << "YES"; 
    } else{
       cout << "NO"; 
    }
    
    return 0;
}