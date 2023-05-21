#include<iostream>
using namespace std;
int first(int arr[],int key,int size){
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    int ans=-1;
    while (start<=end){
        if (key==arr[mid]){
            ans=mid;
            end=mid-1;
        }
        else if(key<arr[mid]){
            end=mid-1;
        }
        else if(key>arr[mid]){
            start=mid+1;
        }

        mid=start+(end-start)/2;
    }
    return ans;
}
int last(int arr[],int key,int size){
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    int ans=-1;
    while (start<=end){
        if (key==arr[mid]){
            ans=mid;
            start=mid+1;
        }
        else if(key<arr[mid]){
            end=mid-1;
        }
        else if(key>arr[mid]){
            start=mid+1;
        }

        mid=start+(end-start)/2;
    }
    return ans;
}

int main(){
    int even[9]={1,2,3,3,3,3,3,3,4};
    cout<<"first occ"<<first(even,3,9);
        cout<<"first occ"<<last(even,3,9);
    return 0;
}