#include<iostream>
using namespace std;
int main(){
    int num[]={1,5,6,7};
    int target=12;
    for (int i = 0; i < 4; i++)
    {
        for ( int j = i+1; j < 4; j++)
        {
            if(num[j]==target-num[i])
            {
                cout<<i << j<<endl;
            }
            
        }
        
    }
    return 0;
}