#include<bits/stdc++.h>
using namespace std;

bool binary(int a,int s,int e,int k){
   
    if (s>e)
    {
        return false;
    }
     int mid=s+(e-s)/2;
    else if(a[mid] == key){
        return true;
    }
   if (a[mid]<k)
   {
    return binary(a,mid+1,e,k);
   }
   else{
        binary(a,s,mid-1,k);
   }
   
    

}
int main(){
    int a[6]={2,4,6,7,8,10};
    int key=10;

cout<<"present or not "<<binary(a,0,5,key)<<endl;
    return 0;
}