#include<iostream>
#include<queue>
using namespace std;
int main(){
//max heap
priority_queue<int> maxi;
//min heap
priority_queue<int,vector<int>,greater<int>> mini;
maxi.push(77);
maxi.push(98);
maxi.push(1);
maxi.push(4);
cout<<"size of the queue   :"<<maxi.size()<<endl;
int n=maxi.size();
for (int i = 0; i < n; i++)
{
    cout<<"let it out  :"<<maxi.top()<<endl;
    maxi.pop();
}


mini.push(77);
mini.push(98);
mini.push(1);
mini.push(4);
cout<<"size of the queue   :"<<mini.size()<<endl;
int m=mini.size();
for (int i = 0; i < m; i++)
{
    cout<<"let it out  :"<<mini.top()<<endl;
    mini.pop();
}
    return 0;
}
