#include<bits/stdc++.h>
using namespace std;

int mergearray(int &arr,int s,int e){
   int mid=s+(e-s)/2;
   int len1=mid-s+1; 
   int len2=e-mid;
   int *first=new int[len1];
    int *second=new int[len2];

   int mainarrayindex=s;
   for (int i = 0; i < len1; i++)
   {
    first[i++]=arr[mainarrayindex++];
   }
    mainarrayindex=mid+1;
     for (int j= 0; j < len2; j++)
   {
    second[j++]=arr[mainarrayindex++];
   }

   int index1=0;
   int index2=0;
   while (index1<len1||index2<len2)
   {
  if (first[index1]<first[index2])
  {
    arr[mainarrayindex++]=first[index1++];
  }
  else{
    arr[mainarrayindex++]=second[index2++];
  }
  

   }
   
   


}
int mergesort(int arr,int s,int e){
    int mid=s+(e-s)/2;
    if (s>=e)
    {
        return 0;
    }
    mergesort(arr,s,mid);
    mergesort(arr,mid+1,e);
}
int main(){
    int arr[8]={3,5,2,7,4,6,8,0};
    int s=0;
    int e=7;
    mergesort(int arr,int s,int e);

    return 0;
}