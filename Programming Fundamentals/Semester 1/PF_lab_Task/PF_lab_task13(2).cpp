#include<iostream>
using namespace std;

void repeated_check(char strng[],int size);
void repi_chck(bool);

int main(){

 int str_size=0;

cout<<"\nEnter the Amount of character to be checked:\n";
cin>>str_size;
str_size+=1;

char string[str_size];

cout<<"\n\nEnter the String=";

for(int i=0;i<str_size-1;i++){
    cin>>string[i];
}
int string_size=str_size;

repeated_check(string,string_size);

    return 0;
}

void repeated_check(char string[],int size){
int j=0;
bool rep_chck=false;
for(int i=0;i<size;i++){
    j=i+1;
    while(string[j]!='\0'){
          if(string[i]==string[j]){
            string[i]='-';
            string[j]='-';
            rep_chck=true;
          }

j++;
    }if(rep_chck=false)
    repi_chck(rep_chck);
}
cout<<endl;
cout<<string;
}
void repi_chck(bool a){
    if(a==false){
        cout<<"\n\nNo characters are repeated";
    }
}