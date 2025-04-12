#include<iostream>
using namespace std;

bool strng_size(int);
void vowel_chck(char strng[],int);

int main(){
    
bool size_chck;
    int str_size=0;

cout<<"\nEnter the Amount of character to be checked";
cin>>str_size;
str_size+=1;

char string[str_size];

for(int i=0;i<str_size-1;i++){
    cin>>string[i];
}

size_chck=strng_size(str_size);

if(size_chck){

vowel_chck(string,str_size);

}else{
    cout<<"\n\nThe string is smaller then 4 character";
}

    return 0;
}
bool strng_size(int size){
    if(size>4){
        return true;
    }else{
        return false;
    }
}
void vowel_chck(char strng[],int size){
    int i=0;

bool a=true,e=true,ii=true,o=true,u=true;

    while(strng[i]!='\0'){

    if(strng[i]=='a'&& a){
        cout<<strng[i]<<" ";
         a =false;}
    else if(strng[i]=='e'&& e){
        cout<<strng[i]<<" ";
         e =false;}
    else if(strng[i]=='i'&& ii){
        cout<<strng[i]<<" ";
         ii =false;}
     else if(strng[i]=='o'&& o){
        cout<<strng[i]<<" ";
         o =false;}
          else if(strng[i]=='u'&& u){
        cout<<strng[i]<<" ";
         u =false;}


         i++;}
         
         
         }


