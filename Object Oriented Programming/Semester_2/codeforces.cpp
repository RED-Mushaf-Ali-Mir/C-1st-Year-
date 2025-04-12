#include<iostream>
using namespace std;

int main(){
    
    int cases=0,arrsize=0;

    cin>>cases;
    

    int i=0,j=0;

   

    for(int s=0;s<cases;s++){
        i=0;
        j=0;
        cin>>arrsize;
        int arr1[arrsize],arr2[arrsize],arrc[arrsize],disc=0,temp=0;

     for(int k=0;k<arrsize;k++)
        cin>>arr1[k];
      
      for(int l=0;l<arrsize;l++)
      cin>>arr2[l];

      while(i<arrsize){
        arrc[i]=arr1[i]+arr2[i];
        for(int k=i-1;k>=0;k++){
            if(arrc[i]==arr1[k]){
                j=i;
                temp=arr1[i];
                arr1[i]=arr1[++j];
                arr1[j]=temp;
            }else{
                disc++;
            }
        }
      }


           
    }

    return 0;
}