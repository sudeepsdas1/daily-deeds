#include<iostream>
using namespace std;
 int peak(int arr[],int size){
     int s=0;
     int e=size-1;
    int mid=s+(e-s)/2;
    while(s<e){
        if(arr[mid]<arr[mid+1]){
            s=mid+1;

        }
        else{
        e=mid;
        }
        mid=s+(e-s)/2;
    }
return s;

 }

int main(){

    int p[8]={0,1,2,5,4,3,2,1};
    cout<<"index of peak element"<<peak(p,5);
    return 0;
}