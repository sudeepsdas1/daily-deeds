#include<iostream>
using namespace std;
int main(){

int x;

cin>>x;
int fact;
fact=x;
while(x>1){
    x--;
    fact=fact*x;
}
cout<<fact<<endl;
    return 0;
}