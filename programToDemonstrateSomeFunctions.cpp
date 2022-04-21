#include<iostream>
using namespace std;

class Time {
    private :
       int hours;
       int minutes;

    public:
       // default constructor
       Time (){
           hours=0;
           minutes=0;

       } 
       //parameterize constructor
       Time (int h,int m){
           hours=h;
           minutes=m;

       } 
       // copy constructor
       Time(Time &t1){
           hours= t1.hours;
           minutes=t1.minutes;

       } 
       void display(){
           cout<<"hours ="<<hours<<endl;
           cout<<"minutes ="<<minutes<<endl;
       }
       
};



int main (){
    //deleare object using default constructor
    Time t1;
    //decleare object using parameterized constuctor
    Time t2(10,10);
    // create opject using copy constructor
    Time t3=t2;
    cout<<"t1  "<<endl;
    t1.display();
    cout<<" t2  "<<endl;
    t2.display();
    cout<<" t3   "<<endl;
    t3.display();

    return 0;
    
}