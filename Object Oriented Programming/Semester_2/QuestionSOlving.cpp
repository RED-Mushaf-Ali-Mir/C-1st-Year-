#include <iostream>

using namespace std;

long long palindrome(long long num){
  long long num1=0,temp;

  temp=num;

  while(true){

  while(temp!=0){
      num1=num1*10+(temp%10);
      temp=temp/10;
  }
  if(num==num1)
    return num;

    else{
    num++;
  num1=0;temp=num;}

}
  

}

int main(){
  long long num=0,cases=0;
 cin>>cases;
  for(int i=0;i<cases;i++){
   cin>>num;
   cout<<palindrome(++num)<<endl;
  }
    return 0;
}