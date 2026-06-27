#include <bits/stdc++.h>
using namespace std;

void bg(int nos){
    for (int i=0; i<=nos; i++){
        
        for(int z=0; z<nos-i+1; z++){
            cout<<"-"<<" ";
        }
        for(int j=0; j<2*i+1; j++){
            cout<<"*"<<" ";
        }
        for(int z=0; z<nos-i+1; z++){
            cout<<"-"<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int n = 5;
    // cout<<"enter no of lines: ";
    // cin>>n;
    bg(n);

}



