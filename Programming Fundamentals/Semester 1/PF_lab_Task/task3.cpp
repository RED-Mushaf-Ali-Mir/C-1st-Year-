#include<iostream>
#include<cstdlib>
using namespace std;

int main(){

cout<<"\n********Task 3 Started********\n";
char arr2[27]={0},lcase,compguess;
int playtime,computer_reward=0,user_reward=0,test2=0;
bool test=true;

for(int i=0,j=65;i<26;arr2[i]={static_cast<char>(j)},i++,j++);

while(test){
    cout<<"\nDo You Want To Play"
    <<"\nTO EXIT (E/e)";cin>>lcase;
    if(lcase!='e'&&lcase!='E'){
    playtime =0;
    cout<<"\nHow many times do you want to play";cin>>playtime;
    int k=0;
    while(k<playtime){
       
       compguess=static_cast<char>(rand()%100);
       while(compguess<=9&&compguess>=0){
        compguess=static_cast<char>(rand()%100);
       }
       for(int i=0;i<26;i++){
        test2=0;
        if(arr2[i]==compguess){
           test2++;
           computer_reward+=test2;
           cout<<"\n\nWIN BY COMPUTER";
           cout<<"\n===============================\n";
        }
       }if(test2==0){
        cout<<"\n\nWIN BY USER";
        user_reward++;
        cout<<"\n===============================\n";
       }
        k++;
    }
    cout<<"\n********Task 3 Ended********\n";
}
else if(lcase=='e'||lcase=='E'){
    test==false;
}
 } return 0;
}