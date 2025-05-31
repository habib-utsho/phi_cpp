#include <bits/stdc++.h>;
using namespace std;

int main(){
     int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];
        for(int i = 0; i<n; i++){
            cin >> arr[i];
        }

        int i = 1, j = i+1;
        long long int lessSum = INT_MAX;

        while(i <  n){
            long long int  sum = arr[i-1] + arr[j-1] + j - i;
            lessSum = min(lessSum, sum);
            // cout << arr[i-1] << " + " << arr[j-1] << " + " << j << " - " << i << " = " << sum << endl;
            if(j == n){
                i++;
                j = i +1; 
            } else{
                j++;
            }
        }


        // for (int i = 1; i <= n - 1; i++)
        // {
        //     for (int j = i + 1; j <= n; j++)
        //     {
        //        long long int cal = arr[i-1] + arr[j-1] + j - i;
        //         lessSum = min(cal, lessSum);
        //     }
        // }



        cout << lessSum << endl;



    }
    return 0;
}