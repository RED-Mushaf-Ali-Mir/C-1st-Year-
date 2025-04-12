#include<iostream>
using namespace std;

//Question 1

// int main(){

//   int arr[10];

//   for(int i=0;i<10;i++)
//   arr[i]=rand();

//   cout<<"\nThe largest sum of 2 numbers of the following digits are :";

//   for(int i=0;i<10;i++)
//   cout<<arr[i]<<" ";

// int largest=arr[0]+arr[1];

// int digit1=arr[0],digit2=arr[1];

//   for(int i=0;i<9;i++)
//    for(int j=i+1;j<10;j++){
//    if(largest<arr[i]+arr[j]){
//     largest=arr[i]+arr[j];
//       digit1=arr[i];
//       digit2=arr[j];
//    }
//    }
//     cout<<"\n\nThe didgit 1 is :"<<digit1;
//     cout<<"\n the digit 2 is :"<<digit2;
//    cout<<"\n\nThe sum is :"<<largest;

//    return 0;
// }

// //Question 2

// int main(){

// float popu=100000,oldpop=0;

// cout<<"\n\nThe Past Decade Record";

// cout<<"\nThe Population on the 10 Year is :"<<popu;

// for(int i=0,k=9;i<9;i++,k--){

// oldpop=(popu*100)/113;

// cout<<"\nThe Population on the "<<k<<" Year is :"<<oldpop;

// popu=oldpop;}


// }

int main(){

    int num=0,i=1,k=1,l=1;

cout<<"\nEnter the Number :";
cin>>num;

int rep=num*(num+1),spacecont=num+1;


while(i<=rep){
    if(i%spacecont==0){
    	cout<<k;
        cout<<endl;
         k++;
         l=1;
    }
    else if(l<=k){
    cout<<"*";
    l++;
    }else{
        cout<<k;
    }
    i++;
}


}


// //Question 4

// int square(int i){
//   return i*i;
// }

// int comb(int i){
//   int comb=1;
// 	for(int k=i;k>0;k--)
//   comb*=k;

//   return comb;
// }



// int main(){

// int num=0;
// float sum=0;

// cout<<"\nEnter the Number for the sum :";
// cin>>num;

// if(num%2==0){

// for(int i=1,k=num;i<=num;i++,k--){
//   if(i%2==0){
//     sum+=static_cast<float>(comb(i))/k;
//   }else{
//     sum+=static_cast<float>(square(i))/k;
//   }
// }
// }

// else{

//   for(int i=1,k=num;i<=num;i++,k--){
//   if(i%2==0){
//     sum+=static_cast<float>(square(i))/k;
//   }else{
//     sum+=static_cast<float>(comb(i))/k;
//   }
// }
  
// }
//    cout<<"\n\nThe sum is :"<<sum; 	
	
// }







