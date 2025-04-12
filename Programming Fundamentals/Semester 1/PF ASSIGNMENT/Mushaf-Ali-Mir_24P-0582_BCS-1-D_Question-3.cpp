#include<iostream>
using namespace std;
/*welcome the program demonstrates a full diamond input so the user can 
enter true height of diamond and get their desired result.Thank You!!*/
int main(){

int height=0;
char chdiamond,condition;
while(height%2==0){
cout<<"Enter The Height of the Diamond(Only Odd Integer): ";cin>>height;}

cout<<"Enter the Character for your Diamond:";cin>>chdiamond;

cout<<"\nDo you wnat to print a hollow diamond(y/n)";cin>>condition;
int test=height/2; 
if(condition=='y'){
for(int i=0;i<test+1;i++){                   
    for(int j=i;j<test;j++){cout<<" ";} 
    cout<<chdiamond;
    if(i!=0){
    for(int j=0;j<(2*i-1);j++){cout<<" ";}
    cout<<chdiamond;}
    cout<<"\n";
}for(int i=test;i>0;i--){
	
	for(int j=i;j<=test;j++){cout<<" ";}
	if(i!=1){cout<<chdiamond;}
	for(int j=0;j<i*2-3;j++){cout<<" ";}
    cout<<chdiamond;cout<<"\n";
  }
}
else if(condition=='n'){
for(int i=0;i<height;i++){

if(i<=test){
    for(int j=i;j<test;j++){
        cout<<" ";
    }
    for(int j=0;j<2*i+1;j++){
        cout<<chdiamond;
        }cout<<"\n";}
else if(i>test){
    for(int j=i;j>test;j--){
          cout<<" ";       }
    for(int j=0;j<((height-i)*2)-1;j++){
        if(condition=='n'){
        cout<<chdiamond;}
    }cout<<"\n";
   }
  }
}return 0;}
    