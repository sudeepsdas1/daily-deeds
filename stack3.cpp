#include<iostream>
using namespace std;
# define MAX 1000
class Stack{
    
    int top;
   
    public:
    int a=[MAX];
    Stack(){top=-1; }

         void push(int x){
            if(top>=MAX-1){
                cout<<"stack overflow"<<endl;
               } else{
                    a[++top]=x;
            }
         }
       void pop(){
            if(top<0)){
                cout<<"stack underflow"<<endl;
                return 0;
            }
                else{
                    int x=[top--];
                    return x;

                }
            }
        
        void peek(){
        if(top<0){
            cout<<"stack is empty"<<endl;
            return 0;
        }
            else{
                int x =a[top];
                cout<< x;
                return x;
            }
        }
    
}

int main(){
    Stack s;
    s.push(6);
    s.push(4);
    s.push(5);


    return 0;
}
