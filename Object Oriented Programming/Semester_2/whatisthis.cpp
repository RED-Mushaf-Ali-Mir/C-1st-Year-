#include<iostream>
#include<string>

using namespace std;

class BankAccount{
   private:
   int accnumber;
   int balance;
   static int totacc;

   public:

   BankAccount(int acc,int b):accnumber(acc),balance(b){
      totacc++;
   }

   BankAccount(int acc):accnumber(acc){
      balance=0;
      totacc++;
   }

   static int gettotalaccount(){
      return totacc;
   }


};

    int BankAccount::totacc=0;

   int main(){
     
      BankAccount A[3]={BankAccount(3331),BankAccount(221,0),BankAccount(88,223)};

      cout<<"\nThe total Account created :"<<BankAccount::gettotalaccount();

      return 0;
   }