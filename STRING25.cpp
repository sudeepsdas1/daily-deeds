#include<iostream>
#include<string>
using namespace std;
int main(){
    string s1="nincompoop";
    s1.erase(0,6);
    cout<<s1<<endl;
    cout<<s1.find("oo")<<endl;
    s1.insert(0,"nin");
    cout<<s1<<endl;
    cout<<s1.size()<<endl;
    for(int i=0;i<s1.length();i++){
        cout<< s1[i] <<endl;
    }
    string s=s1.substr(1,4);
    cout<<s<<endl;

    return 0;
}