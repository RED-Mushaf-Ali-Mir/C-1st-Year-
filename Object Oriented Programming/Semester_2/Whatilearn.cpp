#include<iostream>//clear,ignore,putback,peek,clear,unsetf
#include<string>//getline()
#include<iomanip>//setprecision,setw,setfill
// using std::cout;
// using std::cin;
// using std::endl;
// using std::string;
// using std::setw;
using namespace std;
int main(){
  //std namespace include all the varible of the isotream header file usually
    //one can also use std like this
    std::string str;
    char ch;

    cout<<"\nEnter your favorite character :";
    cin.get(ch);//cin is a stream variable or object and get is a member

    cout<<"\nYour Entered char is :"<<ch;
    
    cout<<"\nString input full line read till newline :";
    cin.ignore();
    getline(cin,str);

    cout<<str;
    cout<<endl;

    cout<<"\nUsing output with setw" <<setw(10)<< "hhooho";
    


    return 0;
}