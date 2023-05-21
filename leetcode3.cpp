#include<iostream>
using namespace std;
int main(){
    int num[]={2,2,5,8};
    int mx=0;
    int profit=0;
    for (int i = 0; i < 4; i++)
    {
        for ( int j = i+1; j <4; j++)
        {
         profit=max(mx,num[j]-num[i]);
         if (profit>mx)
         {
             mx=profit;
             cout<<mx<<endl;
         }
         
        }
        
    }
    return 0;
}