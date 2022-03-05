#include <iostream>
using namespace std;

class Maths {
    private :
      int  ans;
       
    public :
       
       double power(int m,int n=2){
           ans=1;
           for(int i=1;i<=n;i++){
               ans=ans*m;
           }
           return ans;
       }
};

int main() {
    int  m,n,mPowerN;
    cout<<"enter number ";
    cin>>m;
    cout<<endl<<"its power ";
    cin>>n;
    //Maths a(x,y);
    Maths a;
    mPowerN=a.power(m,n);
    cout<<" m  the power n = "<<mPowerN<<endl;
    mPowerN=a.power(m);
    cout<<" m  the power 2 by default = "<<mPowerN;
    
    

    return 0;
}