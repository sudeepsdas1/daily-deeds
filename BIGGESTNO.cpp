#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str;
    cout<<"enter a number of multiple digit: "<<endl;
    getline(cin,str);
    cout<<str<<endl;
    
    sort(str.begin(),str.end(),greater<int>());
    cout<<str<<endl;
    return 0;
}//