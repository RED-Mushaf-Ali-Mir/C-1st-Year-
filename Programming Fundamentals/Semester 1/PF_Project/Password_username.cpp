#include<iostream>
using namespace std;

int strong_pass(string &star){

    size_t index=0;
    int strong=0;
    bool upper=true,symbol=true,number=true,length=true,letter=true;
    
    while(index<star.length()){
    	
    	if(upper){
    	if(star[index]>=65&&star[index]<=90){
    	strong++;upper=false;}
		}
    	if(number){
    	if(star[index]>=48&&star[index]<=57){
    	strong++;number=false;}
		}
    	if(letter){
    	if(star[index]>=97&&star[index]<=122){
    	strong++;letter=false;}
		}
    	if(symbol){
    	if(star[index]=='!'||star[index]=='@'||star[index]=='#'||star[index]=='$'||star[index]=='%'||
		star[index]=='^'||star[index]=='&'||star[index]=='*'||star[index]=='('||star[index]==')'){
    	strong++;symbol=false;}
		}
    	
    	if(length){
		if(index>=5){
    		strong++;length=false;}
			}
    	
	index++;} 
	 if(strong>=5){
	 	cout<<"\nStrong Password\n";
	 }else{
	 	cout<<"\nWeak Password\n";
	 }
    
    
    return strong;
}