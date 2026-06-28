#include <bits/stdc++.h>
using namespace std;

void RATA(int n){
    for (int i=0; i<n; i++){
        for (char j='E'-i; j<='E'; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int nos=5;
    RATA(nos);
    return 0;
}