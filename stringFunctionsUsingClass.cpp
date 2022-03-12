//memember data char arry,int arrSize
//memember function storeString ,addString, equateString, outputString

#include<iostream>
using namespace std;

class String {
    private:
       int arrSize=0;
       char* arr= new char [arrSize];

    public:
       void storeString(char x){
           arr[arrSize]=x;
           arrSize++;
          
       }

       void addString(String s2){
           for(int i=0;i<s2.arrSize;i++){
               arr[arrSize]=s2.arr[i];
               arrSize++;
           }           
       }   


       void equateString(String s2){
           if(arrSize!=s2.arrSize){//arrsize is the size of first string
               cout<<"String are not equal"<<endl;
           }
           else {
               bool isequal=false;
               for(int i=0;i<arrSize;i++){
                   if(i!=0 && isequal==false){
                       cout<<"string are not equal"<<endl;
                       break;
                   }
                   else if(arr[i]==s2.arr[i]){
                       isequal=true;
                   }
                }
                if(isequal==true){
                    cout<<"strings are equal "<<endl;
                }
           }
       }


       void outputString(){
           for(int i=0;i<arrSize;i++){
               cout<<arr[i];
           }
       }    
};


int main(){
    char x;
    String s1,s2;
    cout<<"enter string s1 if ends enter 1"<<endl;
    cin>>x;
    while(x!='1'){
        s1.storeString(x);
        cin>>x;
    }
    cout<<"enter string s2 if ends enter 1"<<endl;
    cin>>x;
    while(x!='1'){
        s2.storeString(x);
        cin>>x;
        
    }
    cout<<"string s1 is ";
    s1.outputString();
    cout<<"\nstring s2 is  ";
    s2.outputString();
    cout<<endl;
    s1.equateString(s2);
    s1.addString(s2);
    cout<<"\nstring s1 after adding s2 ";
    s1.outputString();

    return 0;



    

    

}