#include <bits/stdc++.h>
using namespace std;

void ratni(int nos){
    for (int i=0; i<=nos; i++){
        for(int j=0; j<=i; j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cout<<"enter no of lines: ";
    cin>>n;
    ratni(n);
}