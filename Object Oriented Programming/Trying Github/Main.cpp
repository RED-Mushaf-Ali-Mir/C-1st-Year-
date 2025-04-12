#include<iostream>
#include"Definition.h"

using namespace std;

int main(){
      
    Student s1(4500,5),s2;

    s1.check_validity(4500);

    s1.Class_back();
    
    s2=s1.copyobj();

    cout<<"\nThe Content of  s1 :";s1.display();
    cout<<"\nThe Content of s2 :";s2.display();
    cout<<"\nThe Static Function :"<<Student::alwcall(55);
    


    return 0; 
}