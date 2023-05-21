#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int> d;
    d.push_back(1);
    d.push_back(7);
  
    d.push_front(3);
    d.push_front(5);
    d.push_front(9);
    d.push_front(33);
    d.push_front(53);
    d.push_front(39);
    d.push_back(2);
    for (int i : d )
    {
        cout<<i<<endl;
    }

    cout<<"  this is end   "<<endl;
    d.pop_back();
    for (int i : d )
    {
        cout<<i<<endl;
    }
      cout<<"  this is end   "<<endl;
    d.pop_front();
    for (int i : d )
    {
        cout<<i<<endl;
    }
    cout<<"this is on first index"<<endl<<d.at(1)<<endl;
    cout<<"in the front"<<endl<<d.front()<<endl;
    cout<<"in the back"<<endl<<d.back()<<endl;
    d.erase(d.begin(),d.begin()+1);
    for (int i : d )
    {
        cout<<i<<endl;
    }
    cout<<d.size()<<endl;

    return 0;
}