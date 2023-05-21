#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<string> s ;
    s.push("sudeep");

        s.push("sujit");
            s.push("subojit");
                s.push("sume");
                    s.push("meera");
                    s.push("dulal");
                    while (!s.empty())
                     {
                        cout << ' ' << s.top()<<endl;
                            s.pop();
                    }
                    s.pop();
                    cout<<s.empty()<<endl;
                    cout<<s.size()<<endl;
    return 0;
}