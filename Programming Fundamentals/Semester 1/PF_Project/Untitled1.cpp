#include<iostream>
using namespace std;

bool check_pass(string str,int leng){
bool symbol=true,number=true,special=true;
int count=0;
  for(int i=0;i<leng;i++){
  if(number){
    if(str[i]>=0||str[i]<=9){
        count++;
        number=false;
    }}

    if(symbol){
    if(str[i]=='@'||str[i]=='#'||str[i]=='$'||str[i]=='%'||str[i]=='!'||str[i]=='|'||str[i]=='-'||str[i]=='+'){
        count++;
        symbol=false;
    }

  }
if(count>=2){
    return true;
}else if(count<2){
    return false;
}
else{
    return true;
}

}
return true;
  }

int main(){
 string oldpass,newpass,cnfm_pass;
 int otp=0,otp1=0;


 cout<<"\n\nEnter your old password :";cin>>oldpass;

otp=rand()%100+4331;

cout<<"\nYour Otp Is "<<otp<<" Please enter your otp";

cout<<"\nEnter your OTP : ";cin>>otp1;

if(otp1!=otp){
    cout<<"\n\nWrong Otp Persmission Denied!";
    return 0;
}

cout<<"\nCreate new password :";cin>>newpass;

int leng=newpass.length();

if(leng<5){
    cout<<"\nPassowrd is short"
    <<"\nPassowrd change failed";
return 0;
}

bool check=check_pass(newpass,leng);
   

if(check){
  
  cout<<"\n\nConfirm Password";cin>>cnfm_pass;

  if(cnfm_pass==newpass){
    cout<<"\nPassword chnaged sucessfully";
  }else{
    cout<<"\nPassword chnage failed";
  }

}else{
    cout<<"\nPasword chnage failed not strong";
}

    return 0;
}