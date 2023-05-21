#include<iostream>
using namespace std;
int fib(int n){
    if (n==0||n==1)
    {
        return n;
    }
    
    int prevfib=fib((n-1)+(n-2));
    return prevfib ;
}
int main(){
    int n;
    cin>>n;
    cout<<fib(n)<<endl;
    return 0;
}