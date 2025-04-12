#include<iostream>
using namespace std;

int main(){

    int i=0,j=0,check_eo=0;
    int n=3,k=0,a=0,b=0;

int array[n][n]={
{1,0,1},
{1,0,1},
{1,1,1}
};

int number[9]={0};

number[k]=array[0][0];

while(n-1!=i&&n-1!=j){
 if(array[0][0]==1){

    if(check_eo%2==0){
        check_eo++;
        if(j+2>n){
        i++;
        number[++k]=array[i][j];
        a=j;
    }
        else {j++;
        number[++k]=array[i][j];
        a=j;}
        while(i!=a){
            j--;
            i++;
            number[++k]=array[i][j];}
        }
        else if(check_eo%2!=0){check_eo++;
            i++;
            b=i;
            number[++k]=array[i][j];
            while(j!=b){
                j++;
                i--;
                number[++k]=array[i][j];
            }
        }

    }

 }
 number[8]=array[n-1][n-1];

for(int k=0;k<9;k++){
    cout<<number[k]<<" ";
}


    return 0;
}