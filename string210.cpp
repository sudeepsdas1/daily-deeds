#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
  string str="23456";
for (int i = 0; i < str.size(); i++)
{
      sort(str.begin(),str.end(),greater<int>());
}

  
  
    
    cout<<str<<endl;
    return 0;
    
}