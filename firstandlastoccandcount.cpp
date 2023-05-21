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
    int indexfirst=first(even,3,9);
    int indexlast=last(even,3,9);
    cout<<"first occ  "<<indexfirst<<endl;
        cout<<"first occ  "<<indexlast<<endl;
        int no=indexlast-indexfirst+1;
        cout<<no<<endl;
    return 0;
}