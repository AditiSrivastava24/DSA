#include <bits/stdc++.h>
using namespace std;

void ratnj(int nos){
    for (int i=0; i<=nos; i++){
        for(int j=0; j<=i; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cout<<"enter no of lines: ";
    cin>>n;
    ratnj(n);
}