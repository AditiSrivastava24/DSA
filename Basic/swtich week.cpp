//use switch commands to specify which day of the week it is
#include <bits/stdc++.h>
using namespace std;
int main(){
    int day;
    cout<<"Enter day number: ";
    cin>>day;
    switch (day){
        case 1:
            cout<<"Mon"<<endl;
            break;
        case 2:
            cout<<"Tue"<<endl;
            break;
        case 3:
            cout<<"Wed"<<endl; 
            break;
        case 4:
            cout<<"Thu"<<endl;
            break;
        case 5:
            cout<<"Fri"<<endl;
            break;
        case 6:
            cout<<"Sat"<<endl;
            break;  
        case 7:
            cout<<"Sun"<<endl;
            break;
        default:
            cout<<"Invalid"<<endl;
            break;
    }
    return 0;
}