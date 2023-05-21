#include<bits/stdc++.h>
using namespace std;
bool isSorted(int *a,int size){
    //base case
    if (size==0||size==1)
    {
        return true;
    }
    if (a[0]>a[1])
    {
        return false;
    }
    else
    {
        int remain= isSorted(a+1,size-1);
        return remain;
    }
    
    
}
int main(){
    int a[5]={5,2,3,4,5};
    int size=5;
    bool ans=isSorted(a,size);
    if (ans)
    {
        cout<<"sorted"<<endl;
    }
    else{
        cout<<"not sorted"<<endl;
    }
    
    return 0;
}