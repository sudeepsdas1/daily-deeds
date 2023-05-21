#include<iostream>
using namespace std;
class ACCOUNT{
    public:
    int id;
    string name;
    double balance;
};
int main(){
    ACCOUNT A1;
    cin>>A1.id;
    cin>>A1.name;
    cin>>A1.balance;
    cout<<A1.id<<endl;
    cout<<A1.name<<endl;
    cout<<A1.balance<<endl;

    return 0;
}