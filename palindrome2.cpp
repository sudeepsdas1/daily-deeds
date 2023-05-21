#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int digits;
    int rev=0;
    int num;
    n=num;
    while(n!=0){
        digits=num%10;
        rev=(rev*10)+digits;
        num=num/10;

    }
    if(n==rev){
        cout<<"its a palindrome"<<endl;
    }
     else{
            cout<<"its not a palindrome"<<endl;
        }
    return 0;
}