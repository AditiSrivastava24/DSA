#include <bits/stdc++.h>
using namespace std;

void iratn(int nos){
    for (int i=0; i<=nos; i++){
        for(int j=0; j<nos-i+1; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cout<<"enter no of lines: ";
    cin>>n;
    iratn(n);

}



