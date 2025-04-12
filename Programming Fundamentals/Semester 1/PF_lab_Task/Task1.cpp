#include<iostream>
#include<cmath>
using namespace std;

int main(){
 int n,mean,count=0;
 cout<<"Enter the number of elemnets for the array =";cin>>n;
 int arr[n],chck[20]{0};

 cout<<"Enter the numbers for the array =";

 for(int i=0;i<n;i++){
    cin>>arr[i];

 }
mean=arr[1]-arr[0];
for(int i=0;i<n-1;i++){

    if(arr[i+1]-arr[i]!=mean){
    
        for(int j=count;j==count;j--){
            chck[j]=arr[i+1];
        }count++;
    }
} if(chck[0]==0){
    cout<<"\n\nNo Outliers";
}else{
    cout<<"\n\nThe Outliers =";
    for(int i=0;i<count;i++){
        cout<<chck[i]<<" ";
    }
}
    return 0; 
}