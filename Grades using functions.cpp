#include <bits/stdc++.h>
using namespace std;


//void function
void grades(int m){
    if (m>=90){
        cout<<"A+"<<endl;
    }else if (m>=80 && m<90){
        cout<<"A"<<endl;
    }else if (m>=70 && m<80){
        cout<<"B"<<endl;
    }else{
        cout<<"C"<<endl;
    }
}

//return function
int grade(int m){
    if (m>=90){
        return 10;
    }else if (m>=80 && m<90){
        return 9;
    }else if (m>=70 && m<80){
        return 8;
    }else{
        return 7;
    }
}

int main(){
    int marks;
    cout<<"Enter marks: ";
    cin>>marks;
    cout<<"Grade: ";
    grades(marks);
    cout<<"Grade Point: "<<grade(marks)<<endl;
    return 0;
}