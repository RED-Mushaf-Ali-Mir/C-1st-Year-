#include <iostream>

using namespace std;

//OOP lab task 1
//Question 1

void swap(int* ptr1,int* ptr2){

    int temp;

    temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;

}

int main(){

    
    int num1,num2;
    int* ptr1,*ptr2;

    cout<<"\nEner the first number to swap :";
    cin>>num1;
    cout<<"\nEner the second number to swap :";
    cin>>num2;

    ptr1=&num1;
    ptr2=&num2;

    cout<<"\nNumber 1 Original Value :"<<*ptr1;
    cout<<"\nNumber 2 Original Value :"<<*ptr2;
    

    swap(ptr1,ptr2);   
    
    cout<<"\n\nNumber 1 After swap Value :"<<*ptr1;
    cout<<"\nNumber 2 After swap Value :"<<*ptr2;

    return 0;
}



