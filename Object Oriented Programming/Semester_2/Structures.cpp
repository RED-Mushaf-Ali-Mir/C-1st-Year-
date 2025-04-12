#include<iostream>
#include<string>
using namespace std;

struct studentinfo{
    string name;
    int pf;
    int calculus;
    int physics;
    char grade;
    int marks[10];
};

int main(){
      
    // studentinfo newstudent={"boom",44,44,33,'a',{1,2,3,4,5,6,7,8,9,10}};

    // studentinfo student[25];

    // int size1=sizeof(student)/sizeof(student[0]);

    // for(int i=0;i<size1;i++){

    // cout<<"\nEnter the student name :";
    // cin.ignore();
    // getline(cin,student[i].name);
     
    // cout<<"\nEnter stduent PF Marks :";
    // cin>>student[i].pf;

    // cout<<"\nEnter stduent calculus Marks :";
    // cin>>student[i].calculus;

    // cout<<"\nEnter stduent physics Marks :";
    // cin>>student[i].physics;

    // cout<<"\nEnter stduent Grade :";
    // cin>>student[i].grade;

    // cout<<endl<<endl;

    // cout<<" "<<student[i].name<<" "<<student[i].pf<<" "<<student[i].calculus<<" "<<student[i].physics<<" "<<student[i].grade<<endl;}
    
    // int size=sizeof(newstudent.marks)/sizeof(newstudent.marks[0]);

    // cout<<"\nThe size is :"<<size<<endl;

    // for(int i=0;i<size;i++){
    //     newstudent.marks[i]=rand()%100;
    //     cout<<newstudent.marks[i]<<" ";
    // }
     
    studentinfo student;
    studentinfo* ptr=&student;

    cout<<"ENter the name of student :";
    cin>>ptr->name;
    cout<<"Enter the grade :";
    cin>>ptr->grade;

    cout<<"\n\nThe name is :"<<ptr->name;
    cout<<"\nThe grade is :"<<ptr->grade;

    for(int i=0;i<10;i++)
     ptr->marks[i]=rand()%10;

    for(int i=0;i<10;i++)
    cout<< ptr->marks[i]<<" ";

    return 0;
}