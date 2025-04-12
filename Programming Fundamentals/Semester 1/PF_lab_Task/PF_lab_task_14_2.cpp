#include<iostream>
using namespace std;

void even_check_fun(int* arr,int count){

    for(int i=0;i<count;i++){
        if(*(arr+i)%2==0){
            cout<<*(arr+i)<<" ";
        }
    }

}

int main(){

    cout<<"\n\t********TASK 2 Started********\n";

    int str_num=0,end_num=0,count=0;

    cout<<"\nEnter the start number to check for even nummbers :\n";
    cin>>str_num;
    cout<<"\nEnter the end number to check for even nummbers :\n";
    cin>>end_num;

    for(int i=str_num+1;i<end_num;i++){
        count++;
    }
    int chk_array[count]={0};
    for(int i=str_num+1,j=0;i<end_num;i++,j++){
    chk_array[j]=i;
    }
cout<<endl;

cout<<"\nThe Even Numbers Are :\n";

even_check_fun(chk_array,count);

cout<<"\n\n\t********TASK 2 Ended********\n";
    
    return 0;
}