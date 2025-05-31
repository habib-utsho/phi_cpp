#include <bits/stdc++.h>;
using namespace std;

int main(){
      int n;
        cin >> n;
        int arr[n];
        for(int i = 0; i<n; i++){
            cin >> arr[i];
        }
        
        int sortArr[n];
        for(int i = 0; i<n; i++){
            sortArr[i] = arr[i];
        }

        // swap

        for(int i = 0; i<n; i++){
            for(int j = i+1; j<n; j++){
                if(sortArr[j] < sortArr[i]){
                    int temp = sortArr[j];
                    sortArr[j] = sortArr[i];
                    sortArr[i] = temp; 
                }
            }
        }

        for(int i = 0; i<n; i++){
            cout << sortArr[i] << " ";
        }





    return 0;
}