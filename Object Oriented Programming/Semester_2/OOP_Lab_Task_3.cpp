#include<iostream>
#include<string>

using namespace std;

//Task 1

// struct Address{

//     string city;
//     string Country;
// };

// struct Contact_Info{
   
//     string name;
//     string Phone_No;
//     Address address;
// };

// int main(){
//     Contact_Info People[10]{{"Ali","3311",{"Karachi","Pakistan"}},
//                             {"Ahmed","4411",{"Peshwar","Pakistan"}},
//                             {"Abbas","3211",{"Quetta","Pakistan"}},
//                             {"Ahmer","5411",{"Lal Killa","Pakistan"}},
//                             {"Mouqeet","6311",{"Laiya","Pakistan"}},
//                             {"Basit","9311",{"Hyderabad","Pakistan"}},
//                             {"Haris","8311",{"Islamabad","Pakistan"}},
//                             {"Khizer","6711",{"Rawalpindi","Pakistan"}},
//                             {"Hammad","9611",{"Chinot","Pakistan"}},
//                             {"Nawaz","9311",{"Faislabad","Pakistan"}},
//                             };

//             for(int i=0;i<10;i++){
//                 cout<<"\nThe "<<i+1<<" Person Details:";
//                 cout<<"\n\tName :"<<People[i].name;
//                 cout<<"\n\tPhone Number :"<<People[i].Phone_No;
//                 cout<<"\nAddress :";
//                 cout<<"\n\tCity :"<<People[i].address.city;
//                 cout<<"\n\tCountry :"<<People[i].address.Country;
//                 cout<<endl;
//             }


//     return 0;
// }

//Task 2

struct Address{
   
    string city;
    string state;
    int pincode;
};

struct Student{
    
    string name;
    int rollNumber;
    int marks[5];
    Address address;
};

int main(){
      
    Student student1={"John Doe",101,{90,85,78,92,88},{"New York","NY",10001}},student2;

    student2=student1;

    cout<<"\n\tStudent 1 Details :";
    cout<<"\nName :"<<student1.name;
    cout<<"\nRoll Number :"<<student1.rollNumber;
    cout<<"\nMarks :";
    for(int i=0;i<5;i++){
        cout<<student1.marks[i];
    }
    cout<<"\nAddress :\nCity :"<<student1.address.city;
    cout<<"\nState :"<<student1.address.state;
    cout<<"\nPincode :"<<student1.address.pincode;

    cout<<endl;

    cout<<"\n\tStudent 2 Details :";
    cout<<"\nName :"<<student2.name;
    cout<<"\nRoll Number :"<<student2.rollNumber;
    cout<<"\nMarks :";
    for(int i=0;i<5;i++){
        cout<<student2.marks[i];
    }
    cout<<"\nAddress :\nCity :"<<student2.address.city;
    cout<<"\nState :"<<student2.address.state;
    cout<<"\nPincode :"<<student2.address.pincode;

    student1.marks[0]=95;
    student1.marks[1]=80;
    student1.marks[2]=85;
    student1.marks[3]=90;
    student1.marks[4]=87;
    

    cout<<"\n\nStudent 2 Details After modifying :";
    cout<<"\nName :"<<student2.name;
    cout<<"\nRoll Number :"<<student2.rollNumber;
    cout<<"\nMarks :";
    for(int i=0;i<5;i++){
        cout<<student2.marks[i];
    }
    cout<<"\nAddress :\nCity :"<<student2.address.city;
    cout<<"\nState :"<<student2.address.state;
    cout<<"\nPincode :"<<student2.address.pincode;

    cout<<"\n\nStudent 1 Details (after modifying student2):";

    cout<<"\nName :"<<student1.name;
    cout<<"\nRoll Number :"<<student1.rollNumber;
    cout<<"\nMarks :";
    for(int i=0;i<5;i++){
        cout<<student1.marks[i];
    }
    cout<<"\nAddress :\nCity :"<<student1.address.city;
    cout<<"\nState :"<<student1.address.state;
    cout<<"\nPincode :"<<student1.address.pincode;


    return 0;
}