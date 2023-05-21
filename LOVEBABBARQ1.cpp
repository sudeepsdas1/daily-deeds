#include <iostream>
using namespace std;
void swap(int arr[],int n){
    int start=0;
    int end=n-1;
    while (start<=end)
    {
            
    swap(arr[start],arr[end]);
    start++;
    end--;
    }

    
    
}

void print(int arr[],int n ){
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";

    }
    cout<<endl;
}
int t;
cin>>t;
while (t--)
{
    int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    swap(arr,n);
    print(arr,n);
	
	return 0;
}
}

