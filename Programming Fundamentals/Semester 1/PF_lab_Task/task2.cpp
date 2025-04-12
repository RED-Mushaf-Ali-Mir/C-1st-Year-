#include<iostream>
using namespace std;

int main(){

int n,count,index=0;

cout<<"\nEnter the Number of elements for Occurence chck =";cin>>n;

int arr1[n],chck[n]={0};
cout<<"\nEnter the Elemnets to check =";
for(int i=0;i<n;i++){
    cin>>arr1[i];
}

for(int i=0;i<n;i++){
    count=0;
      for(int j=0;j<n;j++){
           if(arr1[i]==arr1[j]){
               count++;
               chck[i]=count;}
        }

}
int great=chck[0];
for(int i=0;i<n;i++){
if(chck[i]>great){
    great=chck[i];
index=i;
}
}

cout<<"\n\nThe Greatest Number repeated is ="<<arr1[index];
cout<<"\n\nThe Frequency of repition is ="<<great;

    return 0;
}