#include<iostream>
using namespace std;
int main(){
    int t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int c,d;
        cin>>c>>d;
        if (c<=a||d<=b)
        {
            cout<<"impossible"<<endl;
        }
        else{
            cout<<"possible"<<endl;
        }
        

    }
    return 0;

}