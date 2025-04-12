 #include<iostream>
  using namespace std;

int main(){
int array[5]={10,20,30,40,50};

cout<<"The size Of Array ="<<sizeof(array)<<endl;

for(int i=0;i<5;i++){
    cin>>array[i];
}
for(int i=0;i<5;i++){
    cout<<array[i]<<" ";
}

int large;

large=array[0];

for(int i=0;i<5;i++){
    if(array[i]>large){
        large=array[i];
    }
}
}