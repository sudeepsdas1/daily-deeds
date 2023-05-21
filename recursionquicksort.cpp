#include<bits/stdc++.h>
using namespace std;

int partition(int a[],int s,int e){
     int pivot=a[s];
     int count=0;
     for (int i = s+1; i <=e; i++)
     {
        if(a[i]<=pivot){}
        count++;
     }
     int pivotindex=s+count;
     swap(a[pivotindex],a[s]);
     int i=s;
     int j=e;
     while(i<pivotindex&&j>pivotindex){
        while(i<pivot){
                i++;
        }
        while(j>pivot){
             j--;
        }

        if (i<pivotindex&&j>pivotindex)
        {
            swap(a[i++],a[j--]);

        }
        
       
     }
     return pivotindex;
     
}

int quicksort(int a[],int s,int e){
    //basecase
    if (s>=e)
    {
        return 0;
    }
    int p= partition(a,s,e);
  quicksort(a,s,p-1); //sorting left
  quicksort(a,p+1,e); //sorting right

}
int main(){

    int a[10]={4,5,2,3,7,1,4,1,6,9};
    quicksort(a,0,9);

    return 0;
}