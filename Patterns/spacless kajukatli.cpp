#include <iostream>
using namespace std;

void skk(int n){
    int ins=0;
    for (int i=0; i<n;i++ ){
        for (int j=0; j<n-i;j++){
            cout<<"*"<<" ";
        }
        for (int j=0; j<ins;j++){
            cout<<"-"<<" ";
        }
        for (int j=0; j<n-i;j++){
            cout<<"*"<<" ";
        }
        ins=ins+2;
        cout<<endl;
    }

    int ins2=8;
    for (int i=0; i<n;i++){
        for (int j=0; j<i+1; j++){
            cout<<"*"<<" ";
        }
        for (int j=0; j<ins2; j++){
            cout<<"-"<<" ";
        }
        for (int j=0; j<i+1; j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
        ins2=ins2-2;
    }
    
}

int main(){
    int nos=5;
    skk(nos);
}