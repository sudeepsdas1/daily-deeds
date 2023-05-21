#include<bits/stdc++.h>
using namespace std;
int tri(int a[]){
    int sum=0;
    if ((a[0]+a[1])>=a[2]||(a[2]+a[1])>=a[0]||(a[0]+a[2])>=a[1])
    {
       for (int i = 0; i <3; i++)
{
    sum=+a[i];
     return sum;
}
    }
    else
    {
        return 0;
    }
}
int main(){

int a[3];
for (int i = 0; i <3; i++)
{
    cin>>a[i];
}
tri(a);

    return 0;
}



