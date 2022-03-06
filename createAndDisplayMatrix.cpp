//member data  2D array ,int type m,n,i,j for index
//member function constructor,takeElement ,display

#include<iostream>
using namespace std;

class Matrix {
    private:
       int m,n, i=0,j=0;
       int** arr;

    public:
       //constructor
       Matrix(int x,int y){
           m=x;
           n=y;
       }
       void decArrayDynamiclly(){
           arr=new int* [m];
           for(int i=0;i<m;i++){
               arr[i]=new int [n];
            
           }
       }  

       //function for taking input 
       void takeElement(int x){
           if (j>=n){
               i++;
               j=0;
               arr[i][j]=x;
               j++;

           }
           else {
               arr[i][j]=x;
               j++;
           }

       }

       //function for display matrix 
       void display (){
           for(int k=0;k<m;k++){
               for(int l=0;l<n;l++){
                   cout<<arr[k][l]<<"  ";
               }
               cout<<endl;
           }
       }

};


int main(){
    int n,m,element;
    cout<<"enter size of matrix m and n ";
    cin>>m>>n;
    Matrix matrix1(m,n);
    //declear an array 
    matrix1.decArrayDynamiclly();
    cout<<"enter elements of matrix "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>element;
            matrix1.takeElement(element);

        }
    }
    cout<<"elements of the matrix are "<<endl;
    matrix1.display();

    return 0;
}