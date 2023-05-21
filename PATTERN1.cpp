#include<iostream>
using namespace std;
int main(){
    int row;
    cout<<"enter the number of rows"<<endl;
    cin>>row;
    int col;
    cout<<"enter the number of columns"<<endl;
    cin>>col;
    for (int i = 0; i <=row; i++)
    {
        for (int j = 0; j <=col; j++)
        {
            cout<<" * ";
        }
        cout<<endl;
    }
    
    return 0;
}