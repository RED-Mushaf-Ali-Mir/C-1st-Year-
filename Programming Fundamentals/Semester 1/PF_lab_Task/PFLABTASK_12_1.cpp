#include <iostream>
using namespace std;


bool sametest(int a,int b,int c);
int LargestDigitCount(int a,int b,int c);

int main(){

int arr1[3]={0};
bool check=false;

cout<<"\n\n##*****Task 1 Started*****##\n";  

cout<<"\n Enter the three arguments \n";

for(int i=0;i<3;i++){
    cin>>arr1[i];
}

check=sametest(arr1[0],arr1[1],arr1[2]);

if(check==true){
   cout<<"\n All numbers are the same";
}else if(check==false){
    cout<<"\n The Number With the largest digit count ="<<LargestDigitCount(arr1[0],arr1[1],arr1[2]);
}

cout<<"\n\n##*****Task 1 Ended*****##\n\n";   
    return 0;
}

bool sametest(int a,int b,int c){
if(a==b&&b==c&&c==a){
    return true;
}

else{
    return false;
}

}

int LargestDigitCount(int a,int b,int c){

    int count_a=0,count_b=0,count_c=0,check_number=0;

check_number=a;
while( check_number!=0){
check_number/=10;
count_a++;
}
check_number=b;

while( check_number!=0){
check_number/=10;
count_b++;
}
check_number=c;

while( check_number!=0){
check_number/=10;
count_c++;
}

if(count_a>=count_b&&count_a>=count_c){
    return a;
}else if(count_b>=count_a&&count_b>=count_c){
    return b;
}else if(count_c>=count_a&&count_c>=count_b){
    return c;
}

return 0;

}