#include<iostream>
using namespace std;
//The foollwing program demonstrate multiplication table using nested for loop.Thank You!!
int main(){
int stnum=0,endnum=0,testsum=0,realsum=0;

cout<<"\tEnter the starting number: ";cin>>stnum;
cout<<"\tEnter the Ending Number: ";cin>>endnum;

cout<<"\tMultiplication Table From "<<stnum<<" to "<<endnum<<":";
cout<<"\n\t";
for(int i=stnum;i<=endnum;i++){
	cout<<"\t"<<i;
}cout<<"\n";

for(int i=stnum;i<=endnum;i++){

cout<<"\t"<<i;
testsum=0;
for(int j=stnum;j<=endnum;j++){
    testsum=testsum+i*j;
    cout<<"\t"<<i*j;

    if(j==endnum){

        cout<<"\t| "<<testsum;
        realsum=realsum+testsum;
    }
}
cout<<endl;
}
cout<<"\t-----------------------"
<<"\n\tTotal : "<<realsum;

    return 0;
}