#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

// void reverse(int *ptr,int &arr_size){
//   //reversing using pointer aithmetic
//   for(int i=0;i<arr_size-1;i++){
//     cout<<*(ptr+i)<<" ";
//   }cout<<endl;
//   for(int i=arr_size-1;i>=0;i--){
//     cout<<*(ptr+i)<<" ";
//   }
// }

// int Second_largest(int *ptr,int &arr_size){
//   int largest=*ptr,smallest=*ptr,second_largest=0;
    
//     for(int i=0;i<arr_size;i++){
//       if(*(ptr+i)>largest)
//          largest=*(ptr+i);
//       if(*(ptr+i)<smallest)
//          smallest=*(ptr+i);
//     } 
    
//     second_largest=smallest;

//     for(int i=0;i<arr_size;i++){
//         if(*(ptr+i)>second_largest&&*(ptr+i)<largest)
//            second_largest=*(ptr+i);
//     }

//     return second_largest;
// }

// void right_rotation(int *ptr,int &arr_size,int &rotation){
 
//    int temp=0;
//    while(rotation!=0){
//       temp=*(ptr+(arr_size-1));
//    for(int i=arr_size-1;i>=0;i--){
//       *(ptr+i)=*(ptr+(i-1));
//    }*ptr=temp;
//   rotation--;
//   }
//    cout<<endl;
//   for(int i=0;i<arr_size;i++)
//     cout<<*(ptr+i)<<" ";

// }

// int main(){
   
//   int array[10]={1,2,3,4,5,6,7,8,9,10};

//   int *arr_ptr=array;

//   int arr_size=sizeof(array)/sizeof(array[0]),rotation=0;

//   reverse(arr_ptr,arr_size);

//   int second_largest=Second_largest(arr_ptr,arr_size);

//   cout<<"\n\nSecond Largest :"<<second_largest;

//   cout<<"\nEntert the amount to rotate the array to the right :";
//   cin>>rotation;

//   right_rotation(arr_ptr,arr_size,rotation);

//   return 0;
// }

//Dynamic Question

// void displaymatrix(int** arrptr,int n){

//   for(int i=0;i<n;i++){

//      for(int j=0;j<n;j++)
//          cout<<arrptr[i][j]<<" "; 
     
//          cout<<endl;
//     }   
// }

// int diagonal_sum(int** arrptr,int n){
   
//   int digsum=0;

//   for(int i=0;i<n;i++)
//      digsum+=arrptr[i][i];

//   cout<<"\nThe main diagonal sum is :"<<digsum;

  
//   return digsum;
// }

// void sec_diagonal_sum(int **arrptr,int n,int mdigsum){

//    int sdigsum=0,abso_dif=0;

//   for(int i=0,j=n-1;i<n;i++,j--)
//       sdigsum+=arrptr[i][j];

//   cout<<"\nThe Secondary diagonal sum :"<<sdigsum;

//   abso_dif=sdigsum-mdigsum;

//   if(abso_dif<0)
//      abso_dif*=-1;

//   cout<<"\nThe Absolute Difference is :"<<abso_dif;
    

// }

// int main(){

//   srand(time(0));

//   int n=0;
 
//   cout<<"\n Enter the Size of the Two Dimension Array :";
//    cin>>n;

//    int **arrptr=new int* [n];

//    for(int i=0;i<n;i++)
//       arrptr[i]=new int[n];

//    for(int i=0;i<n;i++)
//       for(int j=0;j<n;j++)
//           arrptr[i][j]=rand()%100;

//     displaymatrix(arrptr,n);


//     int digsum=diagonal_sum(arrptr,n);

//     sec_diagonal_sum(arrptr,n,digsum);
    
   
//    for(int i=0;i<n;i++)
//       delete[] arrptr[i];

//     delete []arrptr;

//    arrptr=nullptr;
   
//   return 0;
// }

// struct Student{
  
//   char name[50];
//   int subjects;
//   int* ptr;

// };

// float avg_score(int *score,int subjects){

//   float avgscore=0;

//   for(int i=0;i<subjects;i++){
//       avgscore+=score[i];
//   }

//   avgscore/=subjects;

//   return avgscore;
// }


// int main(){

//   int students=0;
 
//   cout<<"\nEnter the number of students :";
//   cin>> students;

//   float score_avg[students],temp=0;

//   Student details[students],tempp;

//   cin.ignore();

//   for(int i=0;i<students;i++){
//     cout<<"Enter the name of the "<<i+1<<" student :";
//     cin.getline(details[i].name,50);
//     cout<<endl;

//     cout<<"Enter "<<details[i].name<<" number of subjects :";
//     cin>>details[i].subjects;

//     cout<<endl;

//     details[i].ptr=new int [details[i].subjects];
     
//     cout<<endl;
//     for(int j=0;j<details[i].subjects;j++){
//        cout<<"Enter the marks of the "<<j+1<<" subject :";
//        cin>>details[i].ptr[j];
//       cout<<endl;}

//     score_avg[i]=avg_score(details[i].ptr,details[i].subjects);

//     cin.ignore();

//   }

//   for(int i=0;i<students-1;i++)
//      for(int j=i+1;j<students;j++)
//         if(score_avg[j]>score_avg[i]){
//           temp=score_avg[i];
//           score_avg[i]=score_avg[j];
//           score_avg[j]=temp;
          
//           tempp=details[i];
//           details[i]=details[j];
//           details[j]=tempp;
//         }

//   for(int i=0;i<students;i++){
 
//     cout<<"\nName :"<<details[i].name;
//     cout<<"\nScore :";
//     for(int j=0;j<details[i].subjects;j++) 
//       cout<<details[i].ptr[j]<<" ";

//     cout<<"\nThe Average is :"<<score_avg[i];

//     cout<<endl;
   
//   }

//   for(int i=0;i<students;i++)
//      delete []details[i].ptr;

//      delete []details->ptr;

//   return 0;
// }

//recursion

// int arraysum(int arr[],int size,int i=0){
  
//   int sum=arr[i];

//   if(i==size)
//      return 0;
   
//   sum+=arraysum(arr,size,++i);

//   return sum;

// }

// int Factorial(int num){
  
//   int sum=num;

//   if(num==1) 
//      return 1;

//   sum*=Factorial(--num);
//   return sum;
// }

// int main(){
  
//   int arr[5]={1,25,6,3,2};

//   int size =5;

//   for(int i=0;i<size;i++){
//     cout<<arr[i]<<" ";
//   }

//   int recursivesum=arraysum(arr,size);

//   cout<<"\nThe Recursive Sum :"<<recursivesum;

//   cout<<"\nEnter the number for the Factorial :";
//   cin>>size;

//   int factorial=Factorial(size);

//   cout<<"\nThe Factorial is :"<<factorial;

//   return 0;
// }

struct point{
 
  int x,y;

};

void inputpoints(int size,point* points){
  for(int i=0;i<size;i++){
    cout<<"\nEnter the "<<i+1<<" (x,y) points :";
    cin>>points[i].x>>points[i].y;
  }
}

void translatepoints(point*points,int size){
  int x,y;
  for(int i=0;i<size;i++){
    cout<<"\nEnter the amount to translate the ("<<i+1<<") x coordinate and y coordinate :";
  cin>>x>>y;
  points[i].x+=x;
  points[i].y+=y;
  }

  
  cout<<"\n\nThe Points After Translation Are :\n";

  for(int i=0;i<size;i++){
    cout<<"("<<points[i].x<<","<<points[i].y<<")"<<"  ";
    if(i%2!=0)
      cout<<endl;
  }
}


int main(){

  int size;
 
   cout<<"\nEnter the amount of points :";
   cin>>size;

   point* points=new point [size];

  inputpoints(size,points);

  cout<<"\nThe Points Before Translation Are :\n";

  for(int i=0;i<size;i++){
    cout<<"("<<points[i].x<<","<<points[i].y<<")"<<"  ";
    if(i%2!=0)
      cout<<endl;
  }
  cout<<endl;

  translatepoints(points,size);
   

  delete []points;

  return 0;
}