#include<iostream>
#include <cmath>
using namespace std;
int rainwater(int a[]){
    int x=a.length;
    int left[]=new int[x];
    int right[]=new int[x];
left[0]=new[0];
for (int i = 0; i < x; i++)
{
    left[]=math.max(a[i-1],a[i]);
}
right[x-1]=new[x-1];
for (int i = x-1; i < 0; i++)
{
    right[]=math.max(a[i],a[i-1]);
}
}
int main(){
    int a[n];
    for(i=0;i<=n;i++){
        cin>>a[i];
    }
int ans=0;
for (int i = 0; i < a.length; i++)
{
    ans+=math.min(left[i],right[i])-a[i];
    
}
return ans;



    return 0;
}