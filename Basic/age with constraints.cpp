// age adult but if more than 50 then close to retirement
#include <bits/stdc++.h>
using namespace std;
int main(){
    int age;
    cout<<"Enter age: ";
    cin>>age;
    if (age<=18){
        cout<<"CHILD"<<endl;}
    else if (age>18 && age<=59){
        cout<<"Adult"<<endl;
        if (age>50){
            cout<<"also close to retirement"<<endl;}
    }
    else {
        cout<<"Senior Citizen"<<endl;
    }
}