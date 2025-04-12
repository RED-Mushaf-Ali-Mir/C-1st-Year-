/* #include<iostream>
#include<string>
using namespace std;

int Area(int lng_side){

    return lng_side*lng_side;

}

int Area(int lng_side,int width){
        
        return lng_side*width;

}

int main(){
//question 1
int sq_lng=0,width=0,rec_lng=0;
bool chk=true;

while(chk){

cout<<"\nEnter the side length of the square :";cin>>sq_lng;

if(sq_lng==0){
    cout<<"\nThe Result will be zero and area cannot be zero enter non zero number :\n";
    continue;
}else
  chk=false;
 
}
if(sq_lng<0){
    cout<<"\nInavlid input Side length must be positive converting to positive("<<sq_lng*-1<<")";
    sq_lng*=-1;
}


cout<<"\n\nArea of Square :"<<Area(sq_lng);

chk=true;

while(chk){

cout<<"\nEnter the length and width of the rectangle :";cin>>rec_lng>>width;

if(rec_lng==0||width==0){
    cout<<"\nThe Result will be zero and area cannot be zero enter non zero number :\n";
    continue;
}else{
    chk=false;
}


}

if(rec_lng<0){
    cout<<"\nInavlid input.Side length must be positive converting to positive("<<rec_lng*-1<<")\n";
    rec_lng*=-1;
}
if(width<0){
    cout<<"\nInavlid input.width must be positive converting to positive("<<width*-1<<")\n";
    width*=-1;
}

cout<<"\n\nArea of Rectangle :"<<Area(rec_lng,width);

    return 0;
} */
/*#include<iostream>
using namespace std;



int main(){

int size=0;

cout<<"\nEnetr te size of the char string for your input :";cin>>size;

size=size+1;

char str[size];

cout<<"\n\nEnter the characters for your string :";

for(int i=0;i<size-1;i++){
    cin>>str[i];
}



    return 0;
}*/

/*#include<iostream>
using namespace std;

bool symetry(int (&arr_2d)[2][2]){
      int sum1=0,sum2=0;
    
        if(arr_2d[0][0]==arr_2d[1][1]&&arr_2d[1][0]==arr_2d[0][1]){
            return true;
        }else{
        return false;
        }
        return true;
}

int main(){

int arr_2d [2][2]={0},row=2;
bool dupli_chk_1=true,dupli_chk_2=true,sym_chk;

while(dupli_chk_1||dupli_chk_2){

    cout<<"\n\nEnetr the numbers for your 2D Array : ";

for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
        cin>>arr_2d[i][j];
    }
}
if(arr_2d[0][0]==arr_2d[0][1]||arr_2d[0][0]==arr_2d[1][0]){

cout<<"\n\nThe Element in the consecutive row and column are same enter valid numbers :";

dupli_chk_1=true;

}else{
dupli_chk_1=false;
}

if(arr_2d[1][1]==arr_2d[1][0]||arr_2d[1][1]==arr_2d[0][1]){

cout<<"\n \nThe Element in the consecutive row and column are same enter valid numbers :";

dupli_chk_2=true;

}else{
dupli_chk_2=false;
}

}

sym_chk=symetry(arr_2d);

if(sym_chk){
    cout<<"\n\nSymmettric";
}
else{
    cout<<"\n\nNot Symmetric";
}


    return 0;
}*/


/* #include<iostream>
using namespace std;

void reverse_cp(int arr1[],int arr2[],int index1 ,int index2){
if(index1==0){
    arr2[index2]=arr1[index1];
    return;
}
arr2[index2]=arr1[index1];

reverse_cp(arr1,arr2,index1-1,index2+1);
            
}

int main(){

int arr1[5]={0};
int index1=4,index2=0;

   cout<<"\nOringinal Array :\n";
   for(int i=0;i<5;i++){
    arr1[i]=rand()%100;
    cout<<arr1[i]<<" ";
   }

   cout<<endl;

int arr2[5]={0};

reverse_cp(arr1,arr2,index1,index2);


cout<<"\n\nReverse Array Second Element :\n";

int *arrptr=arr2;

for(int i=0;i<5;i++){
    if(i%2!=0)
    cout<<*(arrptr+i)<<" ";

}


    return 0;
}*/

/*#include<iostream>
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
}*/