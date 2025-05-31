#include <bits/stdc++.h>
using namespace std;


int n;
int* func(){
    cin >> n;
    int *arr = new int[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    return arr;
}


int main(){
    int *arr = func();
    cout<< "Total size: " << n<<endl;
    for(int i = 0;i<n;i++){
        cout<<arr[i] << " ";
    }

}
