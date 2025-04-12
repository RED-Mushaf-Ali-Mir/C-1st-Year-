#include<iostream>
#include<windows.h>
#include<P:\VS Code work\PF_Project\Expense_functions.cpp>
using namespace std;

void management_interface(){
    bool manag_loop=true;
    char manag_option ;
    int user_expen=0;
    int expense_choice=0;

while(manag_loop){
  system("cls");
 cout<<"\n\t\t||=============================================================================================||";
 cout<<"\n\t\t||            Welcome Fellow Hostelite To The RED'S Expense Managemnet System                  ||";
 cout<<"\n\t\t||=============================================================================================||";
 
 cout<<"\n\t        ||                                                                                             ||"
     <<"\n\t        ||                                                                                             ||"
	 <<"\n\t        ||                                                                                             ||"
	 <<"\n\t        ||                                                                                             ||"
	 <<"\n\t        ||                                                                                             ||"
	 <<"\n\t        ||                        Please Select Your Desired Option From The Menu                      ||"
	 <<"\n\t        ||                                                                                             ||"
	 <<"\n\t        ||                                 1.Hostel Expense Budget                                     ||"
	 <<"\n\t        ||                                 2.Expense Recommendation                                    ||"
	 <<"\n\t        ||                                 3.My Expense Plan                                           ||"
	 <<"\n\t        ||                                 4.Log Out                                                   ||"
	 <<"\n\t        ||                                                                                             ||"
	 <<"\n\t        ||                                                                                             ||"
	 <<"\n\t        ||                                                                                             ||"
	 <<"\n\t        ||                                                                                             ||"
	 <<"\n\t        ||                                                                                             ||"
	 <<"\n\t        ||                                                                                             ||"
	 <<"\n\t        ||                                                                                             ||"
	 <<"\n\t        ||=============================================================================================||\n\t\t\t\t\t\t\t\t";cin>>manag_option;
	                                                    
     switch(manag_option){
      
       case '1':
       system("cls");
       user_expen=expense_calculator();
       cin.ignore();
       cin.clear();
       continue;
       break;

       case '2':
       expense_choice=expense_recommendation();
       break;

       case '3':
       if(expense_choice==0){
        system("cls");
        cout<<"\n\n\t\t-----------NO PLAN SELECTED YET !!---------------\n";
        system("pause");
        cin.ignore();
        continue;
       }else
       expense_plan(expense_choice);
       break;

       case '4':
      manag_loop=false;
       break;
       
       default:
       system("cls");
       cout<<"\n\t------Invalid Option Please Select The Given Numeric Inputs------ \n\n";
       system("pause");

     }
     
     }

  
}