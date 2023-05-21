#include<iostream>
using namespace std;
int fact(int a){
    int factorial=1;
    for (int i = 1; i <= a; i++)
    {
        factorial*=i;

    }
    return factorial;
    
}
int main(){
    cout<<"Enter the number whose factorial you want to display"<<endl;
    int a;
    cin>>a;
    int ans=fact(a);
    cout<<ans<<endl;
    return 0;
    
}