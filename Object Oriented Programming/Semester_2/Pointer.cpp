#include<iostream>
#include<stdlib.h>
using namespace std;

// void rearrangeArray(int *arr,int n){

//     int array[n],count=0;

//     for(int i=n-1,j=0;i>=0;i--){
//         if(*(arr+i)%2==0){
//             array[j++]=*(arr+i);
//             count++;
//         }
//     }

//     for(int i=n-1,j=count;i>=0;i--){
//         if(*(arr+i)%2!=0)
//           array[j++]=*(arr+i);

//     }

//     for(int i=0;i<n;i++)
//       *(arr+i)=array[i];

// }

int main(){
   
   //Allocating Simple pointer

//    int *ptr;
//    int num=944;

//    ptr=&num;

//    cout<<"\nThe Address Of num is by & :"<<&num;
//    cout<<"\nThe Address Of num is by ptr :"<<ptr;
//    cout<<"\nThe value Of num is by ptr :"<<*ptr;

//    cout<<endl<<endl;

//    //Pointer Airthmetic 

//      int arr[5]={1,2,3,4,5};
     
//      ptr =arr;

//    cout<<"\nFirst Element :"<<*(ptr+0);
//    cout<<"\nSecond Element :"<<*(ptr+1);
//    cout<<"\nThird Element :"<<*(ptr+2);
//    cout<<"\nFourth Element :"<<*(ptr+3);
//    cout<<"\nFifth Element :"<<*(ptr+4);

//     //Pointer to an Array

//     int (*arrptr)[5]=&arr;
       
//     cout<<endl<<endl;

//     for(int i=0;i<5;i++)
//     cout<<(*arrptr)[i]<<" ";

//         cout<<endl;
//         for(int i=0;i<5;i++)
//     cout<<*((*arrptr)+i)<<" ";

//     //Array Of Pointer

//     int *ptrr[5];

//     ptrr[3]=ptr;
//     ptrr[4]=&num;

//     //*ptr[0]=33; not possible as no address is assigned to ptr[0] so segmentation fault

//     cout<<endl;

//     for(int i=3;i<5;i++)
//           cout<<*(ptrr[i])<<" ";

    // int arrayy[3][3];
    //     int (*ptrrr) [3]= arrayy;

    // for(int i=0; i<3; i++)
    //    for(int j=0; j<3 ;j++)
    //        *(*(ptrrr+i)+j)=rand();
 

    // //Dimension Concept

    // int (*ptttr)[3][3]=&arrayy;

    // cout<<endl;

    // for(int i=0;i<sizeof(ptttr[0])/sizeof(ptttr[0][0]);i++)
    //     for(int j=0;j<sizeof(ptttr[0][0])/sizeof(ptttr[0][0][0]);j++)
    //           cout<<ptttr[0][i][j]<<" ";
           
    

    // int (*ptrrr) [3]= arrayy;

    // for(int i=0; i<3; i++)
    //    for(int j=0; j<3 ;j++)
    //        *(*(ptrrr+i)+j)=rand();
 
    // cout<<endl;

    // for(int i=0; i<3; i++)
    //    for(int j=0; j<3 ;j++)
    //        cout<<*(*(ptrrr+i)+j)<<" ";    

    //Accessing an 2D array row with simple ptr

    // int *pptr;
    // pptr=&arrayy[1]; //Not Possible

//     char array[4][4] = {
//         {'Q', 'W', 'E', 'R'},
//         {'T', 'Y', 'U', 'I'},
//         {'O', 'P', 'A', 'S'},
//         {'D', 'F', 'G', 'H'}
//     };

   
// cout<<endl;
//     char (*ptr)[4]=array;

//     for(int i=0;i<sizeof(array)/sizeof(array[0]);i++){
//         for(int j=0;j<sizeof(array[0])/sizeof(array[0][0]);j++){
//          cout<<ptr[i][j]<<" ";
//             }
//      cout<<endl;    
//      }

//     for(int i=sizeof(array)/sizeof(array[0])-1;i>=0;i--){
//        for(int j=sizeof(array[0])/sizeof(array[0][0])-1;j>=0;j--){
//         cout<<ptr[i][j]<<" ";
//        }
//     cout<<endl;
//     }

        // int n=0;

        // cout<<"\nEnter the size of array :";
        // cin>>n;

        // int arr[n];

        // for(int i=0;i<n;i++)
        //  cin>>arr[i];

        // for(int i=0;i<n;i++)
        //  cout<<arr[i]<<" ";

        //  cout<<endl;

        // rearrangeArray(arr,n);

        // for(int i=0;i<n;i++)
        //  cout<<arr[i]<<" ";


         //three largest number

   //       int arr[10];

   //  for(int i=0;i<10;i++)
   //     arr[i]=rand();
         
   //  int largest=arr[0],sec_large,thrd_large;
    
   //  for(int i=0;i<10;i++)
   //     if(arr[i]>largest)
   //        largest=arr[i];

   //  int smallest=arr[0];

   //  for(int i=0;i<10;i++)
   //     if(arr[i]<smallest)
   //        smallest=arr[i];
          
   //  sec_large=smallest;
   //  thrd_large=smallest;

   //  for(int i=0;i<10;i++)
   //     if(arr[i]>sec_large&&arr[i]<largest)
   //        sec_large=arr[i];

   //  for(int i=0;i<10;i++)
   //     if(arr[i]>thrd_large&&arr[i]<largest&&arr[i]<sec_large)
   //        thrd_large=arr[i];

   //  for(int i=0;i<10;i++)
   //     cout<<arr[i]<<" ";

   //  cout<<endl;

   //  cout<<largest<<"\t"<<sec_large<<"\t"<<thrd_large;


   //Dynamic Array

   int **arr=new int* [5];

         for(int i=0;i<5;i++)
          arr[i]=new int[2];

         for(int i=0;i<5;i++)
          delete []arr[i];

          delete[] arr;

          arr=nullptr;
    

    return 0;
}