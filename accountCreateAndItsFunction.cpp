//data members  account noumber,current balance, interest
//data  function deposit, withdraw, calculate interest, check balance
#include<iostream>
using namespace std;

class Account {
    private :
       long int accNum,currBlance;
       int interest;

    public :
       Account (long int x){
           accNum=x;
           currBlance=1000;
           interest=0;
       }   

       void deposit(long int y){
           currBlance=currBlance+y;
           cout<<"money deposit is  "<<y<<endl;
       } 

       void withdraw(long int x){
           if(currBlance-x>1000){
               currBlance=currBlance-x;
               cout<<" money withdraw is "<<x<<endl;
           }
           else  {
               cout<<"insufficient balance , please withdraw amount  less than"<<currBlance-1000<<endl;
           }
           
       }

        void checkBalance(){
           cout<<" your account balance is "<<currBlance<<endl;

       }

        void  calInterest(int time,int rate){
            interest=(currBlance*time*rate)/100;
            cout<<" interest on current balance in given time and rate is  "<<interest<<endl;
        }

    
};


int main(){
    long int accNum,withdrawAmt,depositAmt;
    int time,rate,stopKey=0;
    char operation;
    // operation d for deposit ,w for withdraw, c for check balance , i for interest 
    cout<<"enter account number ";
    cin>>accNum;
    Account acc1(accNum);
    //account is created
    //cout<<"// enter operational key like d for deposit ,w for withdraw, c for check balance , i for interest "<<endl;
    while(stopKey!=-1){
      cout<<"// enter operational key like d for deposit ,w for withdraw, c for check balance , i for interest "<<endl;  
      cin>>operation;
    switch (operation)
    {
    case 'd':
        cout<<"\nenter deposite money ";
        cin>>depositAmt;
        acc1.deposit(depositAmt);
        break;
    case 'w':
        cout<<"\nenter withdraw money ";
        cin>>withdrawAmt;
        acc1.withdraw(withdrawAmt);
        break;
    case 'c':
        acc1.checkBalance();
        break;
    case 'i':
        cout<<"\nenter time and rate for calculate interest ";
        cin>>time>>rate;
        acc1.calInterest(time,rate);
        break;        
    default:
        cout<<"\nenter  operational key  is incorrect ";
        break;
    }
    cout<<"enter  -1 for exit, enter 1 for continue  ";
    cin>>stopKey;
    }
    



    return 0;
}