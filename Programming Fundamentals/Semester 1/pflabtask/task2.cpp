#include<iostream>
using namespace std;
//identity matrix
int main(){
int arr1[3][3]={0},sum1=0;
bool iden=false;

cout<<"\nEnter the Numbers for the identity matrix check";

for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cin>>arr1[i][j];
    }
}
for(int i=0,k=0;i<3;i++,k++){
    if(arr1[i][k]==1){iden=true;}
     else{iden=false;}
}
if(arr1[0][1]==0
&&arr1[0][2]==0
&&arr1[1][0]==0
&&arr1[1][2]==0
&&arr1[2][0]==0
&&arr1[2][1]==0){
    iden=true;
}else{
    iden==false;
}
if(iden==true){
    cout<<"\nThe Matrix is Identity Matrix";
}else if(iden==false){
    cout<<"\nThe Matrix Is Not Identity Matrix";
}
    
    return 0;
}