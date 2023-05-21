#include<iostream>
using namespace std;
    void tower(int n,char current,char final,char helper){
        if (n==0)
        {
            return;
        }
        tower(n-1,current,helper,final);
        cout<<"move from  "<<current<<"   to  "<<final<<endl;
        tower(n-1,current,final,helper);
        
    }
int main(){
    tower(5,'a','c','b');

    return 0;
}