//generate sum using inline function
#include<iostream>
using namespace std;

inline int sum(int x, int y){
    return(x+y);
}

int main(){
    int x,y,res;
    cout<<"enter two number ";
    cin>>x>>y;
    res=sum(x,y);
    cout<<"sum of the given numbers is   "<<res<<endl;


    return (0);

}