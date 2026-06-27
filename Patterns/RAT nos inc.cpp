#include <bits/stdc++.h>
using namespace std;

void RATNI(int n){
    int a=1;
    for (int i=0; i<n; i++){
        for (int j=0; j<i; j++){
            cout<<a<<" ";
            a=a+1;
        }
        cout<<endl;
    }
}

int main(){
    int nos=5;
    RATNI(nos);
    return 0;
}