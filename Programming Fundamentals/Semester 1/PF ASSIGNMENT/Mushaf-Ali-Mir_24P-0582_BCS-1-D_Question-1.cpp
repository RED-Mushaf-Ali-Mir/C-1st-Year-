#include<iostream>
#include<cmath>
using namespace std;
//Series Reverse.
int main(){
    int number=0,test=0,number1=1,count1=1;

cout<<"\nEnter a Poitive Integer to Reduce:\n";cin>>number;
test=number;
while(test!=1){
     if(test%2==0){test/=2;}
        else if(test%2!=0){test=test*3+1;}
   }
   
cout<<number1<<" ";
while(number1!=number){
     if(count1<=4){
        number1*=2;
          cout<<number1<<" ";
             count1++;}
   else if(count1>4){
   
      if(number1%6==0){
            number1*=2;
            cout<<number1<<" ";
           }
      else if(number1%2==0){
         number1/=3;
          cout<<number1<<" ";
           count1++;
        }else if(number1%2!=0){
            number1*=2;
             cout<<number1<<" ";
             count1++;
           }

     }
  }
return 0;
}