// #include<iostream>
// using namespace std;
// int main(){
//     cout<<"enter value of x and y"<<endl;
//     int x;
//     int y;
//     int temp;
//     cin>>x;
//     cin>>y;
//     cout<<"before swap"<<"    "<<"x="<<x<<"    "<<"y="<<y<<endl;
//     temp=x;
//     x=y;
//     y=temp;
//     cout<<"after swap"<<"    "<<"x="<<x<<"    "<<"y="<<y<<endl;




//     return 0;
// }



#include<iostream>
using namespace std;
int main(){
    cout<<"enter value of x and y"<<endl;
    int x;
    int y;
    cin>>x;
    cin>>y;
    cout<<"before swap"<<"    "<<"x="<<x<<"    "<<"y="<<y<<endl;
   x=x+y;
   y=x-y;
   x=x-y;
    cout<<"after swap"<<"    "<<"x="<<x<<"    "<<"y="<<y<<endl;




    return 0;
}