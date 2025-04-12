#include<iostream>
using namespace std;

int fun(int *arr,int array_size){
 
 int average=0;

 for(int i=0;i<array_size;i++){

     average+=*(arr+i);

 }

 average=average/array_size;
  
    return  average;

}

int main(){
      
      cout<<"\n\t********TASK 1 Started********\n";

      int am_num;

    cout<<"\nEnter the Amount of numbers you want to find Average for :\n";
    cin>>am_num;

    int array[am_num];

    cout<<"\nEnter the numbers for your array =";

    for(int i=0;i<am_num;i++){
        cin>>array[i];
    }

   int Average=fun(array,am_num);
   
   cout<<"\nThe Average of the elements of the array is :\n"
   <<Average;

cout<<"\n\n\t********TASK 1 Ended********\n";

    return 0;
}