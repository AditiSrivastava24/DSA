#include <bits/stdc++.h>
using namespace std;

void wap(int n){
    for (int i=0; i<n; i++){
        for (int j=1; j<=i; j++){
            cout<<j<<" ";
        }
        for (int j=0; j<2*n-(2*i+1);j++){
            cout<<"  ";
        }
        for (int j=0; j<i; j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int nos=5;
    wap(nos);
    return 0;
}