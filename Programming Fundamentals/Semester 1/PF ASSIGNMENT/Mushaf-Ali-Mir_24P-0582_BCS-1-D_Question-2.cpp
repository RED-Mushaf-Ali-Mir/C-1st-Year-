#include<iostream>
using namespace std;
//Banking System using do while and conditons.Thank You!!.
int main(){
int option,balance=5000,recep_bal=500,dep_money=0,draw_amount=0;
int tran_amount=0;
char condition,confirm;
cout<<"\nWelcome to the FAST Banking System!";

do{
   cout<<"\n\nChoose an option:"
    <<"\n1. Deposit money"
    <<"\n2. Withdraw money"
    <<"\n3. Check balance"
    <<"\n4. Transfer money to another account"
    <<"\n5. Exit\n";cin>>option;

    switch(option){
     case 1:
cout<<"\nEnter the amount to deposit: $";cin>>dep_money;
cout<<"\nDeposited: $"<<dep_money;
balance+=dep_money;
cout<<"\nNew Balance: $"<<balance;
     break;

     case 2:
     cout<<"\nEnter amount to withdraw :$";cin>>draw_amount;
     cout<<"\nWithdraw: $"<<draw_amount;
     if(draw_amount>balance||draw_amount<=0){
        cout<<"\nError Invalid Withrawl Amount!";
        continue;
     }
     balance-=draw_amount;
     cout<<"\nNew balance: $"<<balance;

     break;

     case 3:
     cout<<"\nCurrent balance: $"<<balance;

     break;

     case 4:
     cout<<"\nEnter amount to transfer to recipient: $";cin>>tran_amount;
     if(tran_amount>balance){
        cout<<"\n\tERROR!"
        <<"The amount exceeds your balance";
        continue;
     }cout<<"\nTransfered: $"<<tran_amount<<" to recipient ";
     balance-=tran_amount;
     recep_bal+=tran_amount;
     cout<<"\nYour New balance: $"<<balance;
     cout<<"\nRecipient's New Balance: $"<<recep_bal;
     break;

     case 5:
     cout<<"\nAre you sure you want to exit? (y/n):";cin>>confirm;
     if(confirm=='n'){
        continue;
     }else{
        condition='n';
     }
     break;
     
     default:
     cout<<"\nInvaid Input Try Again!";
    }
    if(condition!='n'){ 
    do{
    cout<<"\nDo you want to perform another action? (y/n): ";
    cin>>condition;
    if(condition=='y'){
      break;
    } 
    }while(condition!='n');}

}while(condition!='n');

    return 0;
}