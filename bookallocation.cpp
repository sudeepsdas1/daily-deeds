#include<iostream>
using namespace std;
int allocate(int arr[],int n,int m){
    int s=0;
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        sum+=arr[i];
    }
    int e=sum;
    int ans=-1;
    int mid=s+(e-s)/2;
    while(s<e){
        if(ispossible(arr,n,m,mid)){
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    rerurn ans;

}

bool ispossible(int arr[],int n,int m,int mid){
    int student=1;
    int page=0;
    for (int i = 0; i < n; i++)
    {
        if(page=arr[i]<=mid){
            page+=arr[i];
        }
        else{
            student++;
            if(student>m||arr[i]>mid){
                return false;
            }
            page=arr[i];
        }
        return true;
    }

    

}
int main(){
    return 0;
}