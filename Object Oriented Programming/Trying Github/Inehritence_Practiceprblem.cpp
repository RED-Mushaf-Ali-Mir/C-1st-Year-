#include <iostream>
#include <string>
#include <cstring>

using namespace std;

// class Employee {

//     private:
//     char * name;
//     int ID;
//     double salary;
//     static int totalEmployee;
    
//     public:

//     Employee (){
//         name=0;
//         ID = 0;
//         salary = 0 ;
//         totalEmployee++;
//     }

//     Employee (int i,double s,char * n):ID(i),salary(s){
      
//         name = new char [strlen(n) + 1];
//         strcpy(name,n);
//         totalEmployee++;

//     }

//     friend void fake (Employee& e);

//  ~Employee (){
//     delete [ ]name;
//  }

// };

// void fake (Employee & e){

//     char n[100];

//     cout<<"\nEnter the amount to chnage the salary :";
//     cin>>e.salary;

//     cout<<"\nEnter the id of employee :";
//     cin>>e.ID;

//     cout<<"\nThe name of employee :";
//     cin.getline(n,100);

//     e.name = new char [strlen(n)+1];
    
//     strcpy(e.name,n);


//     Employee :: totalEmployee ++;
// }

// int Employee:: totalEmployee = 0;

// int main(){

//     int num_emp=0;

//     cout<<"\nEnter the numbe of employees :";
//     cin>>num_emp;

//     Employee * ptr = new Employee [num_emp];

//     for(int i=0; i<num_emp; i++){
//         fake (ptr[i]);
//     }

//     return 0;
// }

class Person {

    private:
    char * name;
    int age;

    public:

    Person (char*n,int a):age (a) {

        name = new char [strlen(n) + 1];

        strcpy (name , n);

    }

    Person (Person & p) : age (p.age){
        
        name  = new char [strlen(p.name) + 1];
        strcpy (name , p.name);
        
    }

    void show (){
        cout<<"\nName : "<<name ;
        cout<<"\nAge :" <<age ; 
    }

    ~Person (){
        delete [] name;
    }

};

class librarian : public Person {

    private :

     int employeeid;
 
    public :
     
     librarian (int id, char *n, int a):Person(n,a), employeeid(id){}


};

class librarycard {

    public:
    int idcard;

    librarycard (int id) : idcard (id){}

    void foo (){
        cout<<"Yes i am id fucntion :\n";
    }

};

class Student : public Person {

    public :
    librarycard c1;

    public :

    Student (char *n, int a, int i) : Person (n , a) , c1 (i){}
     
    Student (Student & s1 ): Person (s1) , c1(s1.c1){
        
    }

    void foo (){
        cout<<"The id card : "<<c1.idcard;
        c1.foo();
        show ();
    }

    Student *  chck (){
        
        return this;

    }

};

int main (){

    Student s1 ("Abrar ahmed" , 33 , 44553301);

    s1 . foo ();

    Student s2 = s1;

    cout <<endl;

    s2 . foo();

    Student * s3 = s2 . chck();

    s3 -> foo();


    return 0;
}

