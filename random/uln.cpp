#include <bits/stdc++.h>
using namespace std;

void uln(char c){
    if (c>='a' && c<='z'){
        cout<<"Lowercase"<<endl;
    }
    else if (c>='A'&&c<='Z'){
        cout<<"Uppercase"<<endl;
    }
    else if (c>=0 && c<=9){
        cout<<"Number"<<endl;
    }
    else{
        cout<<"Invalid Input"<<endl;
    }
}

int main(){
    char ch;
    cout<<"Enter character: ";
    cin>>ch;
    uln(ch);
}