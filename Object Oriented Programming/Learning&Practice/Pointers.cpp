// #include<iostream>
// #include<iomanip>
// using namespace std;

// void neg_pow(float n , int p){
//       float result=1.0;
//       p*=-1;
//    for(int i=1;i<=p;i++){
//     result*=n;
//    }
// cout<<setprecision(1)<<result;
// }
// //void pos_pow(int n ,int p);

// int main(){
//     int number=0,power=0;

// cout<<"\nENter the number for The base :";
// cin>>number;

// cout<<"\nEnter the number for power :";
// cin>>power;

// if(power<0){
//     float num=1/static_cast<float>(number);
// neg_pow(num,power);
// }else if(power>0){
//     //pos_pow((1/number),power);
// }else if(power==0){
//     cout<<"1";
// }

//     return 0;
// }
// #include<iostream>
// #include<string>
// using namespace std;

// int vowel_check(char str[],int size){
//     int count=0;
//     for(int i=0;i<size-1;i++){
//         if(str[i]=='a'){
//             str[i]='b';
//          count++;
//         }
//         if(str[i]=='e'){
//             str[i]='f';
//         count++;}

//         if(str[i]=='i'){
//             str[i]='j';
//         count++;}

//         if(str[i]=='o'){
//             str[i]='p';
//         count++;}

//         if(str[i]=='u'){
//             str[i]='r';
//         count++;}
//     }

//     for(int i =0;i<size-1;i++){
//         cout<<str[i];
//     }cout<<endl;
// return count;
// }

// int main(){
    
// string vowel;int size,num_vowel=0;

// cout<<"\nEnter the number of characters for your string :";
// cin>>size;

// size=size+1;
// char str[size];
// for(int i=0;i<size-1;i++){
//     cin>>str[i];
// }
// num_vowel=vowel_check(str,size);

// if(num_vowel==0){
//     cout<<"\nNo Vowels";
// }
// else
// cout<<num_vowel;

//     return 0;
// }
// #include<iostream>
// using namespace std;

// int check(int arr[][3],int n){
//     int count=0;
// for(int i=0;i<3;i++){
//     for(int j=0;j<3;j++){
//         if(arr[i][j]==n)
//         count++;
//     }
// }
// return count;
// }

// int main(){

// int array[3][3]={0},number,rep_chk;
// cout<<"\nEnter the number for the array";
// cin>>number;

// for(int i=0;i<3;i++){
//     for(int j=0;j<3;j++){
//         cin>>array[i][j];
//     }
// }
// rep_chk=check(array,number);

// if(rep_chk==0){
//     cout<<"\nNumber Not Found";
// }else{
//     cout<<"\nThe number is repeated :"<<rep_chk;
// }
//     return 0;
// }
// #include<iostream>
// using namespace std;


// void table(int arr[],int num,int num1,int num2){
//     if(num1==0)
//     return;

//     arr[num2]=num*num1;

//     table(arr,num,num1-1,num2+1);
// }

// int main(){
// int array[10]={0};
// int num,num1=10,num2=0;

// cout<<"\nEnter the number for the Positive number for tabel :";
// cin>>num;

// table(array,num,num1,num2);


// int *ptr=array;

// for(int i=0;i<10;i++){
//     cout<<*(ptr+i)<<" ";
// }

//     return 0;
// }
// #include<iostream>
// using namespace std;

// int main(){

// char str[4];

// char uppr[27];
// char lowr[27];

// int pos[3]={0};

// cout<<"\nEnter only 3 characters :";

// for(int i=0;i<3;i++){
//     cin>>str[i];
//     if(str[i]<97||str[i]>122){
//         cout<<"\nIvalid input Retry :\n";
//         i--;
//     }
// }
// for(int i=0,j=65;i<26;i++,j++){
//      uppr[i]=j;
// }
// for(int i=0,j=97;i<26;i++,j++){
//     lowr[i]=j;
// }
// for(int i=0;i<3;i++){
//     for(int j=0;j<26;j++){
//      if(str[i]==lowr[j]){
//         pos[i]=j;
//         break;
//      }

//     }
// }
// int pos1=pos[0],pos2=pos[1],pos3=pos[2];

// cout<<endl;

// cout<<uppr[pos1]<<" Is The IFrst Upper Case letter Position "<<pos1+1 ;
// cout<<endl;
// cout<<uppr[pos2]<<" Is The Second Upper Case letter Position"<<pos2+1;
// cout<<endl;
// cout<<uppr[pos3]<<" Is The Thrid Upper Case letter Postion"<<pos3+1;

// }
#include<iostream>
using namespace std;

// void reff_arr(int (&arr)[5]){
//     for(int i=0;i<5;i++){
//         cout<<arr[0]<<" ";
//     }
// }

// int main(){
 
//  //creating a pointer my reference function.

//  int arr[5]={0};

//  reff_arr(arr);

//     return 0;
// }

// int main(){

// int arr[5],arrsize=sizeof(arr)/sizeof(arr[0]);

// for(int i=0;i<arrsize;i++)
//   arr[i]=rand();

//   //pointer arithmetic

//   int *ptr=arr;

//   for(int i=0;i<arrsize;i++){
//     cout<<*(ptr+i)<<"\t";
//   }
// cout<<endl;
//   //pointer to an array

//   int(*arrptr)[5]=&arr;

//   for(int i=0;i<arrsize;i++)
//   cout<<(*arrptr)[i]<<"\t";

//   cout<<endl;
//   //diemension concept

//   for(int i=0;i<arrsize;i++)
//   cout<<arrptr[0][i]<<"\t";

//   cout<<endl;

//   //Array Of Pointers

//   int *ptrr[4];
//   int a=0,b=99,c=88;

//   ptrr[0]=arr;

//   ptrr[1]=&a;

//   ptrr[2]=&b;

//   ptrr[3]=&c;

//   for(int i=0;i<arrsize;i++)
//   cout<<*(ptrr[0]+i)<<" ";

//     return 0;
// }