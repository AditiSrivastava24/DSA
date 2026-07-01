#include <bits/stdc++.h>
using namespace std;

void pn(int n){
    if(n<=1){
        cout<<"Not Prime"<<endl;
    }
    bool res= true;

    for (int i=2; i<n;i++){
        if (n%i==0){
            res=false;
            break;
        }

    }
    if (res){
        cout<<"PRIME"<<endl;
    }
    else {
        cout<<"NOT PRIME"<<endl;
    }

    cout<<"end"<<endl;
}

int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    pn(n);
    return 0;

}