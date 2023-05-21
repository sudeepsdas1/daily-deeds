#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str1;
    getline(cin,str1);
    transform (str1.begin(), str1.end(), str1.begin(),:: tolower);
    cout<<str1<<endl;
    return 0;
}