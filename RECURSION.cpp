#include<iostream>
using namespace std;
int sum(int a){
    if (a==0)
    {
        return 0;
    }
    
    int prevsum=sum(a-1);
    return a + prevsum;
}
int main(){
    int a;
    cin>>a;
    cout<<sum(a)<<endl;
    return 0;
    
}