#include<iostream>
using namespace std;

void rotateted(int (&arr)[6],int rot);

int main(){

    int arr[6]={10, 11, 7, 33, 5, 1};

  cout<<"Enter the numbers for your array :";

for(int i=0;i<6;i++){
     cin>>arr[i];
 }

cout<<"\nEnter the number of rotation :";

int rot=0;

cin>>rot;

if(rot>6){
    rot%=6;
}
if(rot==6||rot==0){
    for(int i=0;i<6;i++)
    cout<<arr[i]<<" ";
    
    return 0;
}

rotateted(arr,rot);


    return 0;
}

void rotateted(int (&arr)[6],int rot){

     int arrr[6]={0};

     for(int i=rot,j=0;i<6;i++,j++){
      arrr[j]=arr[i];
     }

     for(int i=0,j=6-rot;i<rot;i++,j++){
        arrr[j]=arr[i];
     }
cout<<endl;
for(int i=0;i<6;i++){
    cout<<arrr[i]<<" ";
}


}