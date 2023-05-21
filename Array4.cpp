#include<iostream>
using namespace std;
int linearsearch(int arr[],int n,int key){
    for (int i = 0; i <n; i++)
    {
        if (arr[i]==key)
        {
            return i;
        }
    }
    return -1;
}
int main(){
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
   cout<<linearsearch(arr,n,key)<<endl;
    return 0;
}
//this is linear search 