#include <bits/stdc++.h>;
using namespace std;

int main(){
  string line;
  
  while (getline(cin, line)) {

    // char letters[100001];
    // int len = 0;
    int freq[26] = {0};

    for(int i = 0; line[i] != '\0'; i++){
        if(line[i] >= 'a' && line[i] <= 'z'){
            freq[line[i] - 'a']++;
        }
    }
    
 


    for(int i = 0; i < 26; i++){
        for(int j = 0; j< freq[i]; j++)
            cout << (char)(i + 'a');
    }

    cout << endl;


  }
    return 0;
}