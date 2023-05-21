#include<iostream>
using namespace std;
int main(){
    int num[]={1,5,6,6};
    for (int i = 0; i < 4; i++)
    {
        for ( int j = i+1; j < 4; j++)
        {
            if(num[j]==num[i])
            {
                cout<<"true"<<endl;
            }
            else{
                cout<<"false"<<endl;
            }
            
        }
        
    }
    return 0;
}