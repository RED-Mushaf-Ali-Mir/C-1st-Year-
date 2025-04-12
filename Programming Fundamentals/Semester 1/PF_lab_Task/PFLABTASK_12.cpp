#include<iostream>
using namespace std;

bool room_status[10]={false};

void display_room();
void book_room();
bool exit();

int main(){
 
 cout<<"\n##*****Task 2 Started*****##\n";  

int choice=0;
bool repti=true;

while(repti){
    cout<<"\n\n Room Booking Management System\n"
    <<"\n 1. Display Rooms"
    <<"\n 2. Book Room"
    <<"\n 3. Exit"
    <<"\n Enter Your Choice : ";cin>>choice;

    switch(choice){
     
     case 1:
     display_room();
       break;
    
    case 2:
     book_room();
        break;

    case 3:
      repti=exit();
        break;

    default:
    cout<<"\nInvalid Choice\n";


    }  
}

cout<<"\n\n##*****Task 2 Ended*****##\n";  

    return 0;
}
void display_room(){

for(int i=0;i<10;i++){
if(room_status[i]==0){
    cout<<"\nRoom No."<<i+1<<":Avalible";
}else if(room_status[i]==1){
    cout<<"\nRoom No."<<i+1<<":Not Avalible";
}
 }

}

void book_room(){
    int room_num=0,i=1;

    cout<<"\n Enter room number to book(1-10) :";
    cin>>room_num;

    i=room_num-i;

    if(room_status[i]==false){
       cout<<"\n Room "<<room_num<<" has been successfully booked.";
       room_status[i]=true;
    }else if(room_status[i]=true){
       cout<<"\n Sorry!!"
       <<"\n The Room is already booked";
    }

}

bool exit(){
    return false;
}