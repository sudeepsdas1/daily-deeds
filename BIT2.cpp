#include<iostream>
using namespace std;
int getbit(int n,int pos){
return(n | (1<<pos));
}
int main(){
    cout<<getbit(1,2)<<endl;
    return 0;
}