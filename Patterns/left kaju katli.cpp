#include <bits/stdc++.h>
using namespace std;

void lkk(int n){
    for (int i=0; i<n; i++){
        for (int j=0; j<=i; j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    for (int k=0; k<n;k++){
        for (int j=0; j<n-k-1; j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int nos=5;
    lkk(nos);
}