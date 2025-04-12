#include<iostream>
using namespace std;

int main(){
       
    int num,num1=0,temp;

    cout<<"\nEnter number for palindrome check :";
    cin>>num;
    temp=num;

    while(temp!=0){
        num1=num1*10+(temp%10);//a number remainder by 10 will give last digit like 102 ,
        //100 is didvisible by 10 but 102 is not so temp%10 give 2 the last digit;
        temp=temp/10;//as temp is integer so when i divide by a number not 0.3320 float like 
        //this is stored thus the last digit get deleted like from 102,2 get neglected and 10 
        //remains num1 has to be 0 so i multiply by it 10 to perform further actions.
    }
    if(num==num1)
      cout<<"\nPalindrome";
    
    else
    cout<<"\nNot Plaindorme";

    return 0;
}