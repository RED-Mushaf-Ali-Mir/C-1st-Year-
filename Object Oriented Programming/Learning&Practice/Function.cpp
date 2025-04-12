#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main(){
    ofstream readstu("Grades.txt");
         
         readstu.close();

    ifstream readstu("Grades.txt");
    ofstream assistu("markgra.txt");

    if(!readstu)
    return 1;

    if(!assistu)
    return 1;

     
     int mark1,mark2,mark3,mark4,mark5;
     string name;

     while(readstu>>name>>mark1>>mark2>>mark3>>mark4>>mark5){
        assistu<<name<<"\t"<<mark1<<"\t"<<mark2<<"\t"<<mark3<<"\t"
        <<mark4<<"\t"<<mark5<<"\t"<<(mark1+makr2+mark3+mark4+mark5)/5<<endl;
     }

     readstu.close();
     assistu.close();

}