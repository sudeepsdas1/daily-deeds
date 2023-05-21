#include<iostream>
using namespace std;
#define MAX 100
bool hashtable[MAX+1][2];
bool search(int x){
    if(x>=0){
        if(hashtable[x][0]==1){
            return true;
        }
        else{
            return false;
        }
    }
    else{
        x=abs(x);
        if(hashtable[x][1]==1){
            return true;
        }
        else{
            return false;
        }
    }
}
void insert(int a[],int n){
    for(int i=0;i<n;i++){
        if(a[i]>=0){
            hashtable[a[i]][0]=1;
        }
        else{
            hashtable[abs(a[i])][1]=1;
        }
    }
}

int main(){
    int arr[]={-1,9,2,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    insert(arr,n);
    int find=-3;
    if(search(find)){
        cout<<"element present"<<endl;
    }
    else{
        cout<<"element not present"<<endl;
    }
    return 0;

}