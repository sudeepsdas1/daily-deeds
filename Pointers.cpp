#include<iostream>
using namespace std;
int main(){
    cout<<"enter a no: "<<endl;
    int a;
    cin>>a;
    int* b =&a;
    /*  &-----> (adress of the operator)*/
    cout<<"The Address of a is: "<<b<<endl;
    cout<<"The Address of a is: "<<&a<<endl;
    /*  * ----->(value at defernce operator)*/
    cout<<"the variable stored in b is :"<<*b<<endl;
    int** c=&b;
    cout<<"The address of deference b is:  "<<c<<endl;/*pointer to pointer*/
    return 0;
}
