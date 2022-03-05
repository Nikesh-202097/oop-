#include <iostream>
using namespace std;

class Maths {
    private :
      double  ans;
       
    public :
       
       double power(double m,int n){
           ans=1;
           for(int i=1;i<=n;i++){
               ans=ans*m;
           }
           return ans;
       }
       double power(double m){
           ans=1;
           int n=2;
           for(int i=1;i<=n;i++){
               ans=ans*m;
           }
           return ans;
       }
       
};

int main() {
    double  m,mPowerN;
    int n;
    cout<<"enter number ";
    cin>>m;
    cout<<endl<<"its power ";
    cin>>n;
    //Maths a(x,y);
    Maths a;
    mPowerN=a.power(m,n);
    cout<<" m  the power n = "<<mPowerN<<endl;
    mPowerN=a.power(m);
    cout<<" m  the power 2 by function overloading with only m as an argument = "<<mPowerN;
    
    

    return 0;
}