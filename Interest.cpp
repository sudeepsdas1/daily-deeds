#include<iostream>
using namespace std;
float moneyrecieved(float currentmoney, float interest=1){
    float c=currentmoney*1.56;
    return c;
}
int main(){
    cout<<"Enter the money you will like to invest:  "<<endl;
    int a;
    cin>>a;
    
    cout<<"The amount of money with the intrest you will get after 1 year will be  "<<moneyrecieved(a)<<endl;
    cout<<"The amount of money with the intrest you will get after 1 year if you are a GOLD MEMBER will be  "<<moneyrecieved(a, 1.6)<<endl;
    return 0;

}