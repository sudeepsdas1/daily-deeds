#include<iostream>
#include<array>
using namespace std;
int main(){
    array<int,5> a={12,34,56,78,123456};
    int size=a.size(); 
    for (int i = 0; i < size; i++)
    {
        cout<<a[i]<<endl;
    }
    cout<<size<<endl;

    cout<<"the number at no 3 "<<endl<<a.at(2)<<endl;
    cout<<"empty  or not"<<endl<<a.empty()<<endl;
    cout<<"first element"<<endl<<a.front()<<endl;
    cout<<"last element"<<endl<<a.back()<<endl;

    
    return 0;
}