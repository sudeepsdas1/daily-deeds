#include<iostream>
#include<math.h>
using namespace std;
bool isprime(int num){
for (int i = 2; i<=sqrt(num); i++)
{
    if (num%i==0)
    {
        return false;
    }    
}
    return true;
}
int main(){
    cout<<"Enter the First No."<<endl;
    int a;
    cin>>a;
    cout<<"Enter the Second No."<<endl;
    int b;
    cin>>b;
    for (int i = a; i<=b; i++)
    {if (isprime(i))
    {
        cout<<i<<endl;
    }
    }
    

    return 0;
}