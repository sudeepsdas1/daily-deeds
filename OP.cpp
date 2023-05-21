#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    cout<<"enter the value of a: "<<endl;
    int a;
    cin>>a;
     cout<<"enter the value of b: "<<endl;
    int b;
    cin>>b;
    int c;
    c=((((a*4)-b)+a)+5);
    cout<<"the answer is:"<<c<<endl;
     return 0;
}
//this is for operator presedence u should refer cpp reference