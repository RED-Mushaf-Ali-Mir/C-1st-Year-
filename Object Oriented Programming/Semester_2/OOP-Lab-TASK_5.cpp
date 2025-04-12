#include<iostream>
#include<string>

using namespace std;

//Question 1

class english{

    private:
    string sentence;
    int size;

    public:

    english(string sen){
     size=sen.length();
     sentence=sen;
    }

    english(english& copysentence){
        size=copysentence.size;
        sentence=copysentence.sentence;
    }

    void display(){
        cout<<sentence;
        cout<<"\nThe size of the sentence :"<<size<<endl;;
    }
};

 int main(){
 
    english s1("Great Numbers");

    english s2=s1; //Copy constructor

    english s3=(s1); // Copy Constructor

    cout<<"\nSentence 1 content :";
    s1.display();

    cout<<"\nSentence 2 content :";
    s2.display();

    return 0;
 }


// //Question 2

//    class Serial{

//        private:
// static int serial_count;
//        int serial_number;

//        public:

//        Serial(){
//         serial_number=serial_count;
//         serial_count++;
//        }

//        void report_serial(){
//         cout<<"\nI am Object number "<<serial_number;
//        }
//    };

//    int Serial::serial_count=1;

//    int main(){

//     Serial se1,se2,se3;

//     se1.report_serial();
//     se2.report_serial();
//     se3.report_serial();

//     return 0;
//    }

//   //Question 3

//   class Time{
 
//     private:
//     int hour;
//     int minutes;
//     int seconds;

//     public:
      
//     Time(){
//         hour=0;
//         minutes=0;
//         seconds=0;
//     }

//     Time(int h,int m,int s){
//         hour=h;
//         minutes=m;
//         seconds=s;
//     }

//     void show_time(){
//         if(seconds>=60){
//             minutes+=seconds/60;
//             seconds%=60;
//         }
//         if(minutes>=60){
//             hour+=minutes/60;
//             minutes%=60;
//         }
//         if(hour>=12){
//             hour%=12;
//         }

//         cout<<"\nThe time : "<<hour<<":"<<minutes<<":"<<seconds;

//     }

//     void time_add(Time t1,Time t2){
//         hour=t1.hour+t2.hour;
//         minutes=t1.minutes+t2.minutes;
//         seconds=t1.seconds+t2.seconds;
//     }

//   };

//   int main(){

//     Time t1(7,22,3),t2(6,112,33),t3;

//     t3.time_add(t1,t2);

//     t3.show_time();

//     return 0;
//   }
