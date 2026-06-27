#include <bits/stdc++.h>
using namespace std;

//operations function
int add(int a, int b){
    int c= a+b;
    return c;
}
int sub(int x, int y){
    int z=x-y;
    return z;
}
int mul(int a, int b){
    int c=a*b;
    return c;
}
int divi(int x, int y){
    double z= x/y;
    return z;
}

int main(){
    int num1, num2;
    cout<<"Enter Numbers: ";
    cin>>num1>>num2;
    cout<<"1: Add, 2: Substract, 3: Multiply, 4: Divide"<<endl;
    cout<<"Choose Operation: ";
    int op;
    cin>>op;

    //Switch Statements
    // switch(op){
    //     case 1:{
    //         int res=add(num1,num2);
    //         cout<<"Result: "<<res<<endl;
    //         break;
    //     }
    //     case 2:{
    //         int res=sub(num1,num2);
    //         cout<<"Result: "<<res<<endl;
    //         break;
    //     }
    //     case 3:{
    //         int res=mul(num1, num2);
    //         cout<<"Result: "<<res<<endl;
    //         break;
    //     }
    //     case 4:{
    //         int res=divi(num1,num2);
    //         cout<<"Result: "<<res<<endl;
    //         break;
    //     }
    //     default:
    //         cout<<"Invalid Input"<<endl;
    //         break;
    // }

    //conditional statments
    if (op==1){
        int res=add(num1,num2);
        cout<<"Result: "<<res<<endl;
    } else if (op== 2){
        int res=sub(num1,num2);
        cout<<"Result: "<<res<<endl;
    } else if (op==3){
        int res=mul(num1,num2);
        cout<<"Result: "<<res<<endl;
    }else if (op==4){
        if (num2!=0){
            int res=divi(num1,num2);
            cout<<"Result: "<<res<<endl;
        } else{
            cout<<"Not Defined"<<endl;
        }
        
    } else{
        cout<<"Invalid"<<endl;
    }
    return 0;
}