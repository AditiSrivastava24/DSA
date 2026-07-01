#include <bits/stdc++.h>
using namespace std;

void stn(int n){
    int sum=0;
    for (int i=0; i<=n; i++){
        
        sum =sum+i;
    }
    cout<<"Sum of numbers from 1 to "<<n<<" is: "<<sum<<endl;
}

int main(){
    int nos;
    cout<<"Enter number of numbers: ";
    cin>>nos;
    stn(nos);
}