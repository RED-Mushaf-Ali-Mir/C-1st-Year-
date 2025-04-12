#include<iostream>
#include<string>

using namespace std;

// class chck_cons_des{
//     public:
//       chck_cons_des(){
//         cout<<"\nConstructor called\n";
//       }

//     ~chck_cons_des(){
//         cout<<"\nDestructor called";
//     }
// };


// void func(){
//     chck_cons_des chck;
//     cout<<"\nCalling destrcutor\n"; 
//     chck.~chck_cons_des();

// }

// int main(){
//     chck_cons_des mainobj;
     
//     cout<<"\nFucntion called";
//     func();
//     cout<<"*****\nFunction ended ******";

//     cout<<"\n****Main still running****\n";
      
//     return 0;
// }

//Question 1

// class Maximum_number{
//     private:
//        int num1;
//        int num2;

//        public:
        
//     Maximum_number(){
//         cout<<"\nNo Number were assigned so we assign random number for comparison :";
        
//         num1=rand()%100;
//         num2=rand()%100;

//         cout<<"\nThe numbers we are comparing : "<<num1<<" & "<<num2;

//         if(num1>num2)
//            cout<<"\nThe greater number is :"<<num1;
//         else if(num1<num2)
//            cout<<"\nThe greater number is :"<<num2;
//         else 
//            cout<<"\nBoth The numbers are equal ";
//     }

//     Maximum_number(int n1,int n2){

//         num1=n1;
//         num2=n2;

//         cout<<"\nThe numbers we are comparing : "<<num1<<" & "<<num2;

//         if(num1>num2)
//            cout<<"\nThe greater number is :"<<num1;
//         else if(num1<num2)
//            cout<<"\nThe greater number is :"<<num2;
//         else 
//            cout<<"\nBoth The numbers are equal ";
//     }

// };

// int main(){
//     int n1 =0,n2 =0;

//     cout<<"\nEnter the first numebr :";
//     cin>>n1;
//     cout<<"\nEnter the second numebr :";
//     cin>>n2;

//     if(n1 ==0 && n2 ==0){
//         Maximum_number m1;
//     }else
//         Maximum_number m1(n1,n2);

//     return 0;
// }

//Question 2

// class  tollBooth{
//     private:

//     unsigned int total_cars;
//     double total_money;

//     public:
//     tollBooth(){
//         total_cars=0;
//         total_money=0;
//     }

//    void payingCar(){
//     total_cars++;
//     total_money+=0.50;
//    }

//    void nopayCar(){
//     total_cars++;
//    }

//    void display() const{
//     cout<<"\nThe toal cars passed "<<total_cars;
//     cout<<"\nThe toal cash collected "<<total_money;
//     cout<<endl;
//    }

// };

// int main(){
//     tollBooth bridge;
//     int num;

//     while(num!=3){
//         cout<<"\n1. Select 1 For Paying Car ";
//         cout<<"\n2. Select 2 For Non-Paying Car ";
//         cout<<"\n3. Select 3 To EXIT";
//         cout<<"-->";cin>>num;

//         switch (num){
//             case 1:
//             bridge.payingCar();
//             break;

//             case 2:
//             bridge.nopayCar();
//             break;

//             case 3:
//             bridge.display();
//             cout<<"\n\n->Exiting.......";
//             break;

//             default:
//              cout<<"\nInvalid input try again : \n";
//         }

//     }
//     return 0;
// }

class BankAccount{
   private:
    string accountNumber;
    string accountHolderName;
    double balance;

    public:

    static double interest_rate;

    BankAccount(){
        accountNumber="N/A";
        accountHolderName="Unknown";
        balance=0.0;
    }
    BankAccount(string an,string ahn,double b){
        accountNumber=an;
        accountHolderName=ahn;
        balance=b;
    }

    void deposit(double amount){
        balance += amount;
    }

    void withdraw(double amount){
        if((balance-amount)<0){
            cout<<"\nThe Amount exceeds you balance "
            <<"\nTry Again";
        }else
           balance -=amount;
    }

    void calculateInterest(){
        cout<<"\nThe interest rate :"<<interest_rate;
        cout<<"\nThe interest on your current balance :"<<balance*(interest_rate/100);
    }

    void display(){
        cout<<"\n\nThe Account Number :"<<accountNumber;
        cout<<"\nThe Account Holder Name :"<<accountHolderName;
        cout<<"\nThe Total Balance :"<<balance;
        cout<<"\nThe Interest Rate :"<<interest_rate;
        cout<<endl;

    }

    ~BankAccount(){
        cout<<"\nAccount "<<accountNumber<<" closed\n";
    }

};

   double BankAccount::interest_rate=5.0;

int main(){
    BankAccount A1;
    BankAccount A2("5567222","Mushaf Ali Mir",20000);

    int num,dep=0,wid=0;

    while(num != 5){
        cout<<"\n1. Select 1 To deposit ";
        cout<<"\n2. Select 2 To withdraw";
        cout<<"\n3. Select 3 To calculate interest";
        cout<<"\n4. Select 4 Display account details";
        cout<<"\n5. Select 5 To Exit";
        cout<<"-->";cin>>num;

    switch (num){
        case 1:
        cout<<"\nEntr the deposit amount :";
        cin>>dep;
        A2.deposit(dep);
        break;

        case 2:
        cout<<"\nEnter the wdithdraw amount :";
        cin>>wid;
        A2.withdraw(wid);
        break;

        case 3:
        A2.calculateInterest();
        break;

        case 4:
        A2.display();
        break;

        case 5:
        cout<<"\n\nExitng.......";
        break;

        default:
        cout<<"Worng Input Try Again ";

    }

}
    
    return 0;
}



