#include <bits/stdc++.h>
using namespace std;

int main(){
    char str[10];
    for(int i=0; i<10; i++){
        cin>>str[i];
    }
   if(str[8]=='P'){
    if(str[0]=='1' && str[1]=='2'){
        str[0] = '1';
        str[1] = '2';
    }else{
    str[0] = str[0]+1;
    str[1] = str[1]+2;
    }
   }
   if(str[8]=='A' && str[0]=='1' && str[1] == '2'){
    str[0] = '0';
    str[1] = '0';
   }
   for(int i=0; i<8; i++){
        cout<<str[i];
    }

}
