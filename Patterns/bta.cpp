#include <bits/stdc++.h>
using namespace std;

void bta(int nos){
    for (int i=0; i<=nos; i++){
        
        for(int z=0; z<nos-i+1; z++){
            cout<<"-"<<" ";
        }
        // for(char j='A'; j<'A'+i; j++){
        //     cout<<j<<" ";
        // }
        // for(char j=nos-'A'; j<nos- 'A'+(i-1); j++){
        //     cout<<j<<" ";
        // }
        char ch='A';
        int bp=(2*i+1)/2;
        for (int j=1; j<=2*i+1; j++){
            cout<<ch<<" ";
            if (j<=bp)ch++;
            else ch--;
        }

        for(int z=0; z<nos-i+1; z++){
            cout<<"-"<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int n = 5;
    // cout<<"enter no of lines: ";
    // cin>>n;
    bta(n);

}



