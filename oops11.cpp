#include<iostream>
using namespace std;
class xtx{
    public:
    void mathss(int x,int y){
    cout<< x+y <<endl;
    }
    void mathsss(int x,int y){
    cout<< (x+y)%y <<endl;
    }


};

int main(){
    int x,y;
    cin>>x;
    cin>>y;
    xtx s1;
    xtx s2;
    s1.mathss(x,y);
    s2.mathsss(x,y);

    return 0;
}