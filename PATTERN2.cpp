#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    int b;
    cin>>b;
    for (int i = 1; i <=a; i++)
    {
        for (int j = 1; j<=b; i++)
        {
            if (i==1||i==a || j==1||j==b)
            {
                cout<<"*";
            }
            else{
            cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}