#include<iostream>
using namespace std;
int binarysearch(int arr[],int n,int key){
    for (int i = 0; i <n; i++)
    {
    int s=0;
    int e=n;
    while (s<=e)
    {
        int mid=(s+e)/2;
        if (arr[mid==key])
        {
            return mid;
        }
        else if (arr[mid]>key)
        {
            e=mid-1;
        }
        else if (arr[mid]<key)
        {
            e=mid+1;
        }
        
        
        

    } 
    return -1;
    
}
int main()
{
    cout<<"enter the numbers of terms u want in your array"<<endl;
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i <n; i++)
    {
        cin>>arr[i];
    }
    int key;
    cin>>key;
   cout<<binarysearch(arr,n,key)<<endl;
    return 0;
}
//this is binary search
