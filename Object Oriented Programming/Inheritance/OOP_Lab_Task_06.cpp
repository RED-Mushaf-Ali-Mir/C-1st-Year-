#include <iostream>
#include <string>

using namespace std;

class University {
    public:
    string unname;

    public:

    University (string n):unname(n) {}

};

class Department : public University {

    public :
    string dep_name;

    public:
    Department (string n,string d) : University (n) ,dep_name (d){}

};

class Staff {

    public :
    int staffid;

    public :
    Staff (int i): staffid (i){}

};

class Professor : public Staff ,public Department {

    public:
    Professor (string n ,string d, int i) :Department (n,d) ,Staff (i){}

    void Display (){
        cout<<"\nUniversity name :"<<unname
        <<"\nDepartment name :"<<dep_name
        <<"\nStaff id :"<<staffid;
    }

};

int main (){

    Professor p ("Fast Nuces" ,"Mathmetics" , 1000091);

    p.Display ();

}

// class Person {

//     public :

//     int age;
//     string name;

//     public:

//     Person (string n, int a): name (n) ,age (a){}

// };

// class Marks {

//     public :

//     int math_mark;
//     int science_mark;

//     public :

//     Marks (int m, int s): math_mark(m) ,science_mark (s) {}


// };

// class Student : public Person , public Marks {

//     public :

//     Student (string n, int a ,int mm ,int sm) :Person (n,a) , Marks ( mm, sm ){}

//     void Display_calc (){
//         cout<<"\nStudent Info\n"
//         <<"\nName : "<<name
//         <<"\nAge : "<<age
//         <<"\n\nMarks"
//         <<"\nScience Marks : "<<science_mark
//         <<"\nMath Mark : "<<math_mark
//         <<"\nAverage :: "<<(math_mark+science_mark)/2;
//     } 

// };

// int main (){

//     Student s1 ("Azan Noor" , 20, 84, 91);

//     s1.Display_calc ();


// return 0;
// }