#include<iostream>
#include<string>
using namespace std;
int main(){
    cout<<"enter first sentence"<<endl;
    string str1;
    getline(cin,str1);
    cin>>str1;
    cout<<"enter second sentence"<<endl;
    string str2;
    getline(cin,str2);
    cin>>str2;
    if (str1.compare(str2)==0)
    {
        cout<<"both are same sentence"<<endl;
    }
    else
        cout<<"both are not same sentence"<<endl;
    return 0;
}