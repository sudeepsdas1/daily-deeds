#include<iostream>
using namespace std;
int main(){
    int t;
    while(t--){
        int n,x;
        //where n is the number of bulb and x is the avg. lifetime
        cin>>n>>x;
        int i;
        int d=0;
        for (i = 0; i < n-1; i++){
                int c;
                cin>>c;
                d+=c;
        }
        int t;
        t=(n*x)-d;
        if (d>(n*x))
        {
            cout<<0<<endl;
        }
        else{
            cout<<t<<endl;
        }
        




    }
    return 0;


}