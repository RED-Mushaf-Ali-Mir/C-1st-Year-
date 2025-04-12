#include <bits/stdc++.h>
using namespace std;

int main(){
    int str_size,check=0;

cin>>str_size;

char str[str_size+1];

int half=str_size/2;

for(int i=0;i<str_size;i++){
    cin>>str[i];
}

for(int i=str_size-1,j=0;j<half;--i,j++){
         
      if(str[j]==str[i]){
        check++;

}}
if(check==str_size/2||check==(str_size/2)-1){
    cout<<"Yes";
}else
cout<<"NO";

    return 0;
}