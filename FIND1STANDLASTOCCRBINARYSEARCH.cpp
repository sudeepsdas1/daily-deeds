#include<iostream>
using namespace std;
int binarysearch(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    while(start<end){
        if (arr[mid]==key){
            cout<<mid<<endl;
            return mid;
        }
        if(arr[mid]<key){
            start=mid+1;
        }
        else if(arr[mid]>key){
            end=mid-1;
        }
        mid=start+(end-start)/2;

    }
return -1;
}
int main(){
    int arr[8]={2,4,5,6,6,8,9,11};
    int index=binarysearch(arr,8,6);
    cout<<index<<endl;
    return 0;
}