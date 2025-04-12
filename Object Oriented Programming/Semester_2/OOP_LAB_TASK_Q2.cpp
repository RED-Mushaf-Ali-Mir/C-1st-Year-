#include <iostream>

using namespace std;

//Question 2

int main(){

    int array[10]={1,2,3,4,5,6,7,8,9,10};
    
    int* ptr=array;//storing address of array

    int size=sizeof(array)/sizeof(array[0]);
     
   cout<<"\nAccessing Through Pointer :"<<endl;

    for(int i=0;i<size;i++)
       cout<<*(ptr+i)<<" ";
   

   cout<<"\nReverse Array :"<<endl;
        
   for(int i=size-1;i>=0;i--)
       cout<<*(ptr+i)<<" ";

   return 0;
}