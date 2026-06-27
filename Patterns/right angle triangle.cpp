#include <bits/stdc++.h>
using namespace std;

void rat(int nos){
    for (int i=0; i<=nos; i++){
        for(int j=0; j<=i; j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cout<<"enter no of lines: ";
    cin>>n;
    rat(n);
}