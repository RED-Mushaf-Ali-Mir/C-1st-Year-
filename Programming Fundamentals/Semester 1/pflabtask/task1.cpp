#include<iostream>
using namespace std;

int main(){
int arr[3][4]={0},sum=0,sum1;

cout<<"\nEnter the Numbers for the row sum";

for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cin>>arr[i][j];
    }
}

for(int i=0;i<3;i++){
    sum=0;
    for(int j=0;j<=3;j++){
        if(j==3){
            arr[i][j]=sum;
            cout<<arr[i][j]<<" ";
        }else{
        cout<<arr[i][j]<<" ";
        sum+=arr[i][j];}
    }
    cout<<"\n";
}

    return 0;
}