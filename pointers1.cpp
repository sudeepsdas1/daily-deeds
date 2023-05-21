#include<iostream>
using namespace std;
int main(){
    int num;
    num=56;
    cout<<"this is num:   "<<num<<"this is its address:   "<<&num<<endl;
    int *p=&num;
    cout<<*p;
    cout<<p;
    cout<<sizeof(num)<<endl;
    cout<<sizeof(p)<<endl;
    return 0;
}