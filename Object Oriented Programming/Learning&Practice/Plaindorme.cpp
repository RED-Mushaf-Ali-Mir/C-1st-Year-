#include<iostream>
#include<windows.h>
using namespace std;

int main(){
    system("cls");
    int number,new_num=0,remainder;

cout<<"\nEnter the Number to Check for palindrome :";
cin>>number;

remainder=number;

while(remainder!=0){
    new_num=(new_num*10)+(remainder%10);
    remainder/=10;
}

cout<<"\nThe Number is :\n"<<new_num<<endl;

if(new_num==number){
    cout<<"\nPlaindorme";
}else{
    cout<<"\nNot Plaindrome";
}


    return 0;
}