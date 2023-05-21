#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    string s1="FAM";
    string s2="ILY";

    s1.append(s2);
    cout<<s1<<endl;
    cout<<s1[4]<<endl;
    s1.clear();
    return 0;
}