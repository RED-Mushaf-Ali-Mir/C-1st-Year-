#include<iostream>
#include<string>
#include<cstring>

using namespace std;

class rectangle{
   private:
   int width;
   int length;

   public:
   rectangle(){
    width=0;
    length=0;
   }
   rectangle(int w,int l):width(w),length(l){}

   int getheight(){
        return length*width;
   }

   void print(){
    cout<<"<-The Height The Width ->"<<width<<" and Height ->"<<length;
   }

};

class box:public rectangle{
    private:
    int height;

    public:
    box(int w,int l,int h)
       :rectangle(w,l){
            height=h; 
    }

    void print(){
        cout<<"The parameters of the box are :\n"<<height;
        rectangle::print();
    }
};


int main(){
    box b1(2,3,66);
    b1.print();
    cout<<"\nThe Rec Height ->"<<b1.getheight();
    return 0;
}