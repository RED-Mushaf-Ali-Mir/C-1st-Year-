#include<iostream>
#include<string>

using namespace std;

//QUESTION 1


// class Company{

//     private:
//        int ID;
// static int emp_count;
 
//     public:

//     Company(){
//         ID=0;
//     }

//     Company(int id){
//         display(); // static function calling
//         ID=id;
//     }

//     static void display(){
//              cout<<"\nThe current numbers of employee :"<<emp_count;
//              emp_count++;
//     }
 
// };

// int Company::emp_count=0;//Static variable intilization

// int main(){

//     Company emp(566);

//     Company :: display(); //Calling stattic function

//     return 0;
// }

//QUESTION 2

// class Company{

//     private:
//        int ID;
// const  int salary;
// static int emp_count;
 
//     public:

//     Company():salary(0){
//         ID=0;
//     }

//     Company(int id,int s):salary(s){
//         display();
//         ID=id;
//     }

//     static void display(){
//              cout<<"\nThe current numbers of employee :"<<emp_count;
//              emp_count++;
//     }

//      void details(){

//         cout<<"The ID os employee is :"<<this->ID;
//         cout<<"\nThe salary of the employee :"<<this->salary;
         
//         cout<<"\nAddress of current object : "<<this;
//     } 
 

// };

// int Company::emp_count=0;

// int main(){

//     Company emp(566,30000);
   
//     emp.details();

//     return 0;
// }

//Question 3

// class Car {

//     private:
        
//      string model;
//      int YOF;//year of manufacture

//     public:

//     Car (string m , int y):model(m),YOF(y) {
//         cout<<"The Car "<<model <<" was made in "<<YOF;
//     }

//     ~Car (){
//         cout<<"\nThe car's destructor is called thus the object is destroyed";
//     }
// };


// int main(){ 

//     Car c1("Toyota" , 1993);

//     return 0;
// }

//Question 4 

// class Book {

//     private: 

//      string book_title;
//      string author_name;

//     public: 

//     Book (string bt, string an):book_title(bt) , author_name(an){}

//     void display (){

//         cout<<"\nThe Author name :"<<author_name;
//         cout<<"\nThe Book Title :"<<book_title;
//     }

// };

// int main(){

//     Book* b1=new Book ("Harry Potter" , "JK Rowling");
       
//     delete [] b1;
    
//     b1 = 0;

//   return 0;

// }

//Question 5

// class Rectangle {
 
//     private :

//     int length;
//     int bredth;

//     public :

//     Rectangle (int l, int b) : length (l), bredth (b){}

//     Rectangle (Rectangle& R){
//         length = R.length;
//         bredth = R.bredth;
//     } 

//     void display(){
//         cout<<"\nLength "<<length<<" Bredth :"<<bredth;
//     }

// };

// int main(){
 
//     Rectangle r1 (44,11);

//     Rectangle r2 = r1;

//     r1.display ();
//     r2.display();

//     return 0;

// }


//Question 6

// class Person {

//     private:
//     string *name;
//     int name_size;

//     public:

//     Person(){
//         name=0;
//     }

//     Person (string n){
//          name_size = n.length();

//         name=new string [name_size];
//         for(int i=0;i<name_size;i++){
//             name[i] = string(1, n[i]);
//         }
//     }

//     Person (Person& p){//Deep copy with copy constructor

//         name_size=p.name_size;
    
//         name = new string [p.name_size];

//         for( int i=0; i < p.name_size ;i++){
//         name [i] = p.name[i];
//         }
//     }

//     Person& operator = (Person& p){

//         if(this!=&p){
//             delete [] name;
//             name=p.name;//shallow copy wit assignment operation
//         }

//         return *this;
//     }

//     ~Person (){
//         delete [] name;
//     }

// };

// int main(){

//     Person p1("Imdad Asad");

//     Person p2=p1;//deepcopy

//     Person p3;

//     p3=p2;//shallow copy

//     return 0;
// }

//Question 7

// class Employee {


//     private:
    
//     string name;
//     int ID;
//     int Salary;

//     public:

//     Employee (string n, int id , int s): name(n), ID(id), Salary(s){}

//     void display(){
//         cout<<"\nThe Name :" << name;
//         cout<<"\nThe salary : "<< Salary;
//         cout<<"\nThe ID : "<< ID;
//     }

// };

// class Manager : public Employee {
 
//     private:

//     string department;

//     public: 

//     Manager (string d, string n ,int id, int s):Employee (n,id,s),department(d){}

//     void display (){
//         Employee :: display();
//         cout<<"\nThe "<<department<<" Department";
//     }

// };

// int main (){

//     Manager m1 ("Computer" , "Ahmed Ali", 43300111, 225000);

//     Employee e1 ("Bilal", 3444211, 150000);

//     m1.display();

//     e1.display();

//     return 0;
// }

//Question 8

// class Shape {
     
//     private :

//     double Area;

//     protected:

//     void calculate_area(){}

//     void setArea(double A){
//         Area=A;
//     }

//     public:
 
//     void display_area(){
//         cout<<"\nThe Area is :"<<Area;
//     }
// };


// class Circle :public Shape {
//     private :
//       double radius;
// const double pie=3.14;
  
//     public:

//     Circle (double r): radius(r){}

//     void calculate_area(){
//         setArea(radius*radius*pie);
//     }

// };

// int main() {

//     Circle c1 (3.33);

//     c1 .calculate_area();

//     c1 .display_area();

//     return 0;
// }

//Question 9

// class Vehicle {

//     public :

//     void start_engine (){
//         cout<<"\nVroom Vroom Vroom !!!!!!! \n\t<Vehicle engine started>";
//     }

// };

// class Airplane : public Vehicle {


//     public:

    
//     void start_engine (){
//         cout<<"\nSoooooooooooooooom!!!!!!! \n\t<Airplane engine started>";
//     }


// };

// int main(){

//     Airplane A1;

//     A1.start_engine();
//     A1.Vehicle::start_engine();

//     return 0;
// }

//Question 10

class Person {

    private:
    string name;
    int age;

    public:
    Person (string n, int a): name(n) , age (a){}

    void display (){
        cout<<"Name :"<<name;
        cout<<"Age :"<<age;
    }
};

class Student : public Person {
    
    private:
     string grade;

    public:
    Student (string g,string n,int a):Person (n,a),grade(g){}//to access the private memebers if Person we call
    // the Public constrcutor of Class person to do the initilization for us.
    //A clear implication that we can only access public memebrs in derived but for Priavte accessing we use
    //the avalible public memebrs of the base.

    void display (){
        Person::display();
    
        cout<<"The grade :"<<grade;
    }

};

int main(){
    Student s1("A","Abbas Bilal",21); 

    return 0;
}