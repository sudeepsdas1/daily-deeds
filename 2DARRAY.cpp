#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter the value of row"<<endl;
    cin>>a;
    int b;
    cout<<"enter the value of coloumn"<<endl;
    cin>>b;
    int arr[a][b];
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cin>>arr[i][j];
        }
        
    }
     for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cout<<arr[i][j]<<endl;
        }
        
    }
    
    return 0;
    
}