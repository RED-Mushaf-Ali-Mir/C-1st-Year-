#include<iostream>
using namespace std;

int main(){

int patnership[5][5]={{1,2,3,4,5},{3,5,6,8,9},{2,6,8,9,0},{8,9,1,2,3},{4,5,7,1,2}};

int weight[5][5]={
{2,6,8,9,0},
{8,9,1,2,3},
{4,5,7,1,2},
{1,2,3,4,5},
{3,5,6,8,9}};

int synergy[5][5]={0};

int sum=0;

for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
        sum=0;
       for(int k=0;k<5;k++){
        sum+=patnership[i][k]*weight[k][j];
       }
       synergy[i][j]=sum;
    }
}

for(int i=0;i<5;i++){

 for(int j=0;j<5;j++){
    cout<<synergy[i][j]<<"\t";
}
cout<<endl;
}
    return 0;
}