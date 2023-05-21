#include<iostream>

using namespace std;
#define n 100
class stack{
    int*arr;
    int top;
    public:
    stack(){
        arr=new int [n];
        top=-1;
    }
    void push(int x){
        if (top==n-1)
        {
            cout<<"stack overflow"<<endl;
            return;
        }
        top++;
    }
        arr[top]=x;
        void pop(int x){
            if(top==-1){
                cout<<"no element to popout"<<endl;
                return;
            }
            top--;
        }
            int top(){
                if(top==-1){
                    cout<<"no elememt"<<endl;
                    return-1;
                }
                return arr[top];
            }
            bool empty(){
                return top==-1;
            }
};

int main(){

    stack s;
    s.push(5);
    s.pop(5);
    cout<<s.empty()<<endl;
    return 0;
}