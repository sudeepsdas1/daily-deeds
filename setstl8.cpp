#include<iostream>
#include<set>
using namespace std;
int main(){
set<int> s;
s.insert(1);
s.insert(44);
s.insert(1);
s.insert(14);
s.insert(1);
s.insert(134);
s.insert(0);
s.insert(1);
for (int i :s)
{
    cout<<i<<endl;

}
    cout<<"size of the set"<<s.size()<<endl;
    s.erase(s.begin());
    for (int i :s)
{
    cout<<i<<endl;

}

     
    return 0;
}