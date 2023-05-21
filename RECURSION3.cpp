

// return the factorial of n by using factorial
#include<iostream>
using namespace std;
int factl(int n){
    if (n==0)
    {
        return 1;
    }
    
    // int prevfactl=factl(n-1);
    return n*factl(n-1);  // if we uncomment line 12  we will write prevfactl(n-1) in factl(n-1  )
}
int main(){
    int n;
    cin>>n;
    cout<<factl(n)<<endl;
    return 0;
}