#include<iostream>
#include<string>

using namespace std;

class Person{
    private:

      int age;
      string address;
      string name;
    
    public:

    Person(int a,string addres,string nam) : age(a), address(addres), name(nam){} 

    Person(Person &P){
        age=P.age;
        address=P.address;
        name=P.name;
    }

    Person(){}
 
    void display(){
        cout<<"\nThe Name :"<<name;
        cout<<"\nThe Age :"<<age;
        cout<<"\nThe Address :"<<address;
    }

   virtual  ~Person(){
    cout<<"\nIm very useful ";
   }

};

class Student : public Person{

    private:

    int rollnumber;
    float gpa;
    int *marks;

    public:
    static int student_count;

    Student(int r ,float g,int age, string address, string name ) :Person(age, address, name),rollnumber(r),gpa(g){
        marks=0;
        student_count++;
        
        marks=new int [5];

        cout<<"\n Enter the 5 subject Marks : ";

        for(int i=0;i<5;i++){
           cin>>marks[i];
           cout<<" ";       }

    }

    void change(){
        rollnumber+=88;
        gpa+=1.2;

        for(int i=0;i<5;i++){
            marks[i]+=i;
        }
    }

    Student(Student&S):Person(S){
         rollnumber=S.rollnumber;
         gpa=S.gpa;

         marks=new int[5];

         for(int i=0;i<5;i++){
            marks[i]=S.marks[i];
         }
    }

    void display(){
        Person::display();
        cout<<"\nRoll number :"<<rollnumber;
        cout<<"\nGPA :"<<gpa;
        cout<<"\nMarks :\n";
        for(int i=0;i<5;i++){
            cout<<marks[i]<<" ";
        }
    }

    ~Student(){
        cout<<"\nThe distructor called \n";
        delete []marks;
    }
};

class Professor : public Person {

    private: 

    int employeeID;
    int salary;
    string specilization;

    public:

    static int professor_count;

    void display(){
    Person :: display();
    
    cout<<"\nThe Id :"<<employeeID;
    cout<<"\nThe salary : "<<salary;
    cout<<"\nSpecilization :"<<specilization;
    }

};

int Student::student_count=0;
int Professor::professor_count=0;

int main(){
      
    Student s1(4432,4.5,11,"Boom street","Livinf");
    
    s1.display();

    Student s2=s1;

    s1.change();

    s1.display();

    s2.display();

    return 0;
}