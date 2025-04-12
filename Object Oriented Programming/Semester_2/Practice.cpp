#include<iostream>
using namespace std;

// int main(){
//     int height=0;


//    cout<<"\nEnter the height of the half diamond :";

//    cin>>height;

//    for(int i =0;i<height;i++){

//     for(int j=i;j<height-1;j++){
        
//         cout<<" ";
//     }
//     for(int j=0;j<2*i+1;j++){
//     if(j%2!=0)
//         cout<<"*";

//         else 
//         cout<<" ";

//     } 

//     //    for(int j=0;j<i;j++){
//     //     cout<<" ";
//     //    }
//     cout<<" ";

//        for(int j=height*2-1;j>=i*2+1;j--){
      
//         if(j%2==0)
//         cout<<"*";

//         else 
//         cout<<" ";
//        }

//     cout<<endl;
//    }

//     return 0;
// }

//Lets Try Function Overloading 

// void large(int a,int b){
//     if(a>b){
//         cout<<"\nA is larger";
//     }else
//        cout<<"NONONONO";
// }
// void large(float a,float b){
//     if(a>b){
//         cout<<"\nA is larger";
//     }else
//        cout<<"NONONONO";
// }
// void large(char a,char b){
//     if(a>b){
//         cout<<"\nA is larger";
//     }else
//        cout<<"NONONONO";
// }
// void large(int a,float b,int c){
         
//          if(a>b&&a>c){
//         cout<<"\nA is larger";
//     }else
//        cout<<"NONONONO";
// }
// void large(float a,int b,int c){
//         if(a>b&&a>c){
//         cout<<"\nA is larger";
//     }else
//        cout<<"NONONONO";
// }

// int main(){

// cout<<"\nSelect the Fucntion to overload :"
// <<"\n1. Integer "
// <<"\n2. Float "
// <<"\n3. Character "
// <<"\n4. Parameters "
// <<"\n5. Dat type Ovrld";
// int select;
// cin>>select;

// switch(select){
   
//    case 1:
//    large(33,55);
//     break;

//    case 2:
//    large(4.4f,66.2f);
//     break;

//    case 3:
//    large('c','D');
//     break;

//    case 4:
//    large(22,33.3f,1);
//     break;

//    case 5:
//    large(2.2f,22,1);
//     break;  

//     default :
//     cout<<"\n\nWorng Input";
// }

//     return 0;
// }

//Enumeration 

int main(){

    enum roommates {Afnan,Ahmed,Talha,Mohsin};

    roommates moderate;

    char ch1,ch2;

    cin>>ch1>>ch2;

    switch(ch1){
        case 'A':
        if(ch2=='f')
        moderate =Afnan;

        else 
        moderate =Ahmed;
        
         break;

        case 'T':
        moderate =Talha;
         break;

         case 'M':
        moderate =Mohsin;
          break;

         default :
         cout<<"\n\nThe Input Is Invalid " ; 
    }

    return 0;
}