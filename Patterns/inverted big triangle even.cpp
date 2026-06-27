#include <bits/stdc++.h>
using namespace std;

void ibge(int nos){
    for (int i=0; i<=nos; i++){
        
        for(int z=0; z<i; z++){
            cout<<"-"<<" ";
        }
        for(int j=0; j<nos-i+1; j++){
            cout<<"*"<<" ";
        }
        for(int j=0; j<nos-i+1; j++){
            cout<<"*"<<" ";
        }
        for(int z=0; z<i; z++){
            cout<<"-"<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int n = 5;
    // cout<<"enter no of lines: ";
    // cin>>n;
    ibge(n);

}



