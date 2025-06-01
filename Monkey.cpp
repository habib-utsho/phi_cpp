#include <bits/stdc++.h>;
using namespace std;

int main(){
  string line;
  while (getline(cin, line)) {

    char letters[100001];
    int len = 0;
    for(int i = 0; line[i] != '\0'; i++){
        if(line[i] > 'a' && line[i] < 'z'){
            letters[len] = line[i];
            len++;
        }
    }
    for(int i = 0; i < len; i++){
        for(int j = i+1; j< len; j++){
            if(letters[j] < letters[i]){
                char temp = letters[i];
                letters[i] = letters[j];
                letters[j] = temp; 
            }
        }
            
    }
    for(int i = 0; letters[i] != '\0'; i++){
            cout << letters[i];
    }

    cout << endl;


  }
    return 0;
}