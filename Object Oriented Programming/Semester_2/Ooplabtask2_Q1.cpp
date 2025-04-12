#include<iostream>
using namespace std;

bool Palindrome_chck(char *string,int size){
    
      char Pstr[size];

      for(int i=size-1,j=0;i>=0;i--,j++)
          Pstr[j]=*(string+i);

      for(int i=0;i<size;i++)
        if(*(string+i)!=Pstr[i])
           return false;

    return true;
    

}

void frequency_chck(char *string,int size,char ch){
     
    int count=0;

    for(int i=0;i<size;i++){
        if(ch==*(string+i))
           count++;
    }

    cout<<"\nThe character is repeated times :"<<count;

}

int main(){ 

    char string[50],ch;
    int size=0;

    cout<<"\nEnter the string for Palindrome check :";
    cin>>string;

    for(int i=0;i<50;i++){
        if(string[i]=='\0')
           break;

        size++;
    }

    bool chck=Palindrome_chck(string,size);

    if(chck)
     cout<<"\nThe string is Palindrome ";
    else
      cout<<"\nThe string is not palindrome";

    cout<<"\n\nEnter the character to chck for frequency : ";
    cin>>ch;

    frequency_chck(string,size,ch);

    return 0;
}

