#include<iostream>
using namespace std;

int main(){
 
int x,avg=0,c=0,chk=0;

int t=0,n;

cin>>t;

for(int i=0;i<t;i++){
  cin>>n>>x;
  avg=0;
  for(int j=0;j<n;j++){
     cin>>c;
     avg+=c;
  }
  if(avg % n == 0 && avg / n == x){
    cout<<"Yes";
  }else
     cout<<"No";

     cout<<endl;
}

    return 0;
}