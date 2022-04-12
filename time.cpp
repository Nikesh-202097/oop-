#include<iostream>
using namespace std;

class Time {
    private:
       int hours,minutes;
    
    public:
       Time (){
           hours=0;
           minutes=0;
       }
       //constuctor for converting int to Time
       Time (int mint){
           hours=mint/60;
           minutes=mint%60;

       }
       // casting operator for Time to int 
       operator int(){
           return(hours*60+minutes);
       }
       // function to display data memebers
       void output(){
           cout<<" hours = "<<hours<<endl;
           cout<<" minutes = "<<minutes<<endl;

       }
       
};


int main(){
    int minutes;
    cout<<"enter the minutes ";
    cin>>minutes;
    Time t1;
    
    // convert minutes to t1
    t1=minutes;
    t1.output();
    // covert t1 to minutes 
    minutes =t1;
    cout<<"/n minutes after converting t1 to minutes "<<minutes;
    return 0;



}