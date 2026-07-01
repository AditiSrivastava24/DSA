#include <bits/stdc++.h>
using namespace std;

void pn(int n){
    int i=0;
    int sum=0;
    while(i<=n){
        if (i%2==0){
            sum=sum+i;
        }
        i++;
    }
    cout<<sum;
}

int main(){
    int n;
    cin>>n;
    pn(n);
}