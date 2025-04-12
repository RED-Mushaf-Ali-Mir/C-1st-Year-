#include<iostream>
using namespace std;

int count_even_num(int,int);
void print_count(int,int,int);



int main(){

    char option;
    int range_start=0,range_end=0;

cout<<"\nChoose an option (R/r or P/p):\n";
cin>>option;

switch(option){
      
      case 'r':
      case 'R':

      cout<<"\nEnter the Start Range To Count The Even Numbers\n";
      cin>>range_start;

      cout<<"\nEnter the End Range To Count The Even Numbers\n";
      cin>>range_end;

      cout<<"\nThe Count Of Even Number: "<<count_even_num(range_start,range_end);

      break;

      case 'p':
      case 'P':
      cout<<"\nEnter the Start Range To Print the Count of Even Numbers\n";
      cin>>range_start;

      cout<<"\nEnter the End Range To print the Count of Even Numbers\n";
      cin>>range_end;
      
      print_count(range_start,range_end,0);

      break;


      default:
      cout<<"\nINVALID INPUT\n";
     
}

    return 0;
}

int count_even_num(int str_range,int end_range){

     if(str_range>end_range)
     return 0;
         
    if(str_range%2==0)
    return 1+count_even_num(str_range+1,end_range);

    else
    return count_even_num(str_range+1,end_range);
    
}

void print_count(int str_range,int end_range,int count){

 if(str_range>end_range)
     return;
         
    if(str_range%2==0){
    count++;
    cout<<count<<" ";}

    print_count(str_range+1,end_range,count);
   
}