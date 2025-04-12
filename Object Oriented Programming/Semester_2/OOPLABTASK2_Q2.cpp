#include<iostream>
using namespace std;

int main(){

    int rows,cols,sum=0,maximum,minimum,temp=0;

    cout<<"Enter the rows for the 2D Array : ";
    cin>>rows;

    cout<<"\nEnter the cols for the 2D Array: ";
    cin>>cols;

    int **ptr=new int*[rows];

    for(int i=0;i<rows;i++)
        ptr[i]=new int [cols];
   
   cout<<"\nEnter the vlaues in the Array :\n";

    for(int i=0;i<rows;i++)
       for(int j=0;j<cols;j++)
          cin>>ptr[i][j];
   
   //Sum

   for(int i=0;i<rows;i++)
       for(int j=0;j<cols;j++)
          sum+=ptr[i][j];

   //MAX AND MIN
   
   maximum=ptr[0][0];
   minimum=ptr[0][0];

   for(int i=0;i<rows;i++)
       for(int j=0;j<cols;j++){
          
           if(maximum<ptr[i][j])
               maximum=ptr[i][j];
           
           if(minimum>ptr[i][j])
              minimum=ptr[i][j];

       }
   
   //TRANSPOSE

   cout<<endl;

   for(int i=0;i<cols;i++){
       for(int j=0;j<rows;j++)
          cout<<ptr[j][i]<<" ";
    
          cout<<endl;}
          
       
   cout<<"\nThe max is : "<<maximum;
   cout<<"\nThe minimum is :"<<minimum;
   cout<<"\nThe sum of the array elements :"<<sum;

    for(int i=0;i<rows;i++)
        delete []ptr[i];

    delete []ptr;

    ptr=nullptr;


   return 0;
}