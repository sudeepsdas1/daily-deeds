#include<iostream> 
#include<queue>
using namespace std;
int main(){
    queue<string> q;
    q.push("sudeep");
    q.push("subojit");
    q.push("aniket");
    cout<<q.size()<<endl;
    while (!q.empty())
    {
        cout<<" "<<q.front()<<endl;
        q.pop();
    }
    
    cout<<q.front()<<endl;
    q.pop();
    cout<<q.front()<<endl;
    cout<<q.size()<<endl;
    return 0;
}
