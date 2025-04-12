#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

bool check_leapyear(int);
void print_calender(int , int);
int days_month(int , int);
int total_days(int , int);

int main(){
    int year=2024,month=1;
    bool leapyear;
while(year!=-1){
cout<<"\n\n Please Enter the year for the calender (-1 to exit)\n";
cin>>year;

if(year==-1)continue;

cout<<"\n Please Enter the month for the calender\n";
cin>>month;

leapyear=check_leapyear(year);

if(leapyear){
    cout<<"\n The Year is a leap year\n";
}else{
    cout<<"\n The year is not  leap year\n";
}
print_calender(month,year);
}

    return 0;
}

bool check_leapyear(int year){
if(year%4==0 && year%100!=0 || year%400==0)
return true;

else
return false;

}

void print_calender(int month,int year){

string months[]{"January", "February", "March", "April", "May", "June",
"July", "August", "September", "October", "November", "December"};

int first_day=total_days(month,year);
int month_days=days_month(month,year);

//cout<<"\n\t****" <<months[month-1]<<" : "<<year<<"****\n";
cout << "\nSun  Mon  Tues  Wed  Thur  Fri  Sat\n";

for(int i=0;i<first_day;i++){
    cout<<"     ";
}

for(int i=1;i<=month_days;i++){
    cout << setw(3) << i << "  ";
        if ((first_day + i) % 7 == 0) {
            cout << endl;
        }
}

}
int total_days(int month,int year){
      int day =1,total_days=0;

      for(int i=1900; i<year; i++){
    total_days+=(check_leapyear(i))?366:365;
      }
      for(int i =1; i<month; i++){
        total_days+=days_month(i,year);
      }
     return (total_days+day) %7;

}

int days_month( int month,int year){
    
    if(month==2)
    {return (check_leapyear(year))?29:28;}
    else if(month == 4 || month == 6 || month == 9 || month == 11)
    {return 30;}
    else
    {return 31;}

    return 0;
}
