#include<iostream>
using namespace std;
int main(){
    cout<<"Enter a number:";
    int a;
    cin>>a;
int i=a;
    if(i<45){
        cout<<i<<endl;
        i++;
    }
    else{
        cout<<"its an invalid number";
    }
    return 0;
}
/*sequence structure:action1 > action 2 > then execution
  selection structure:action1 >cond>action 1 or action 2>execution
  loop structure:action 1 (true> return to loop >(false) exit loop*/