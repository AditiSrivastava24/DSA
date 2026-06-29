#include <iostream>
using namespace std;

void wkk(int n){
    int ins2=8;
    for (int i=0; i<n-1;i++){
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

    
    
}

int main(){
    int nos=5;
    wkk(nos);
}