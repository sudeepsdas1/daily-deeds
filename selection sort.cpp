#include<iostream>
using namespace std;
int selectionSort(int arr[],int n){
    for (int i = 0; i <n-1; i++)
    {
       int minIndex=i;
       for (int j = i+1; j< n; j++)
       {
           if (arr[j]<arr[minIndex])
           {
               minIndex=j;
           }
           swap(arr[minIndex],arr[j])
           
       }
       
    }
    

}
int main(){
    int arr[]={1,4,2,3,7,6}
    int n=arr.size();
    cout<<selectionSort(arr,n);
    return 0;
}