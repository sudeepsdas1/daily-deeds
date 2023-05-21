#include<bits/stdc++.h>
using namespace std;
bool isPresent(int *a,int size,int key){
    //base case
    if (size==0)
    {
        return false;
    }
    if (a[0]==key)
    {
        return true;
    }
    else
    {
        int remain= isPresent(a+1,size-1,key);
        return remain;
    }
    
    
}
int main(){
    int a[5]={5,2,3,4,5};
    int size=5;
    int key=0;
    bool ans=isPresent(a,size,key);
    if (ans)
    {
        cout<<"present"<<endl;
    }
    else{
        cout<<"not present"<<endl;
    }
    
    return 0;
}