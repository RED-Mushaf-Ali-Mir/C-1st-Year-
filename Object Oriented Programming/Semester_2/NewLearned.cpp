#include<iostream>
#include<cstring>
using namespace std;

// void printstr(char *ch){

//     while(*ch){
//         cout<<*
//         ch++;
//     }cout<<endl;

// }

// void copystr(const char *str1, char *str2){

//     while(*str1)
//        *str2++=*str1++;

//     *str2='A';
//     str2++;
//     *str2='\0';


// }

// int main(){
   
//     char str1[]="The new life of pie .",str2[35];


//     //Copying str1 to str2

//     printstr(str1);
//     copystr(str1,str2);

//     cout<<str2;

//     char* ptrtostr[7]={"Sunday", "Monday", "Tuesday",
//         "Wednesday", "Thursday",
//         "Friday", "Saturday"};

//         cout<<endl;

//     for(int j=0;j<7;j++)
//         cout<<ptrtostr[j]<<endl;

//  return 0;

// }

//Constructor And Destructor

class strr{
   
    private:
      char *str;

    public:

    strr(){
        str=nullptr;
    }

    void copystr(char* str,int length){
        delete []this->str;
           this->str=new char[length+1];
        strcpy(this->str,str);
        this->str[length]='\0';
    }

    void printstr(){
        if(str)
        cout<<str<<endl;
    }

    ~strr(){
        delete [] str;
    }

};

int length(char *str){

    int len=0;
    while(*str){
      str++;
        len++;}

    return len;
       
}
 

int main(){


     char str[]="The weather is good think think done be bumed;";
     strr obj1;

     int strlenn=length(str);

     obj1.copystr(str,strlenn);

     obj1.printstr();

    return 0;
}

//linking object file together and creating obj files.
//cc -c exercise.cpp
//cc test.cpp A.obj B.obj
// #ifndef MYCLASS_H  helps stops second inclusion in the program of the smae header file.
// #define MYCLASS_H  //name bcz avoiding smae name vrible thus good macros practice.
//#pragma once
//#define PI 3.14159
// // Your header file content here

// #endif

