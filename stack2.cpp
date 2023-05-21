#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<string> st;
    st.push("sudeep");
        st.push("sudee");
            st.push("sude");
                st.push("sud");
                    st.push("su");
                        st.push("s");
                        cout<<st.top()<<endl;
                        st.pop();
                        cout<<st.top()<<endl;
                        st.pop();
                        cout<<st.empty()<<endl;
                        cout<<st.top()<<endl;
                        st.pop();
                        cout<<st.top()<<endl;
                        st.pop();cout<<st.top()<<endl;
                        st.pop();
                        cout<<st.top()<<endl;
                        st.pop();
                        cout<<st.top()<<endl;
                        st.pop();
                        cout<<st.top()<<endl;
                        cout<<st.empty()<<endl;
    return 0;
}