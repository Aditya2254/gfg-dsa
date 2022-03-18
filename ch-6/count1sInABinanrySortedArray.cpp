#include<bits/stdc++.h>
using namespace std;
int iterativeSearch(int arr[], int low, int high, int value){
    while (low<=high)
    {
        int mid=(low + high)/2;
        if(arr[mid]==value){
            if (mid== 0 || arr[mid-1]!=arr[mid])
                return mid;
            else
                high=mid-1;
        }
        else if(value>arr[mid])
            low=mid+1;
        else if(value<arr[mid])
            high=mid-1;
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int x=iterativeSearch(arr,0,n-1,1);
    if(x==-1)
        cout<<0;
    else
        cout<<n-x;
}