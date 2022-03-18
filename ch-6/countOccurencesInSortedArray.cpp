#include<bits/stdc++.h>
using namespace std;
int firstOccurence(int arr[],int n,int value){
    int low=0,high=n-1;
    while (low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]==value){
            if(mid==0 || arr[mid-1]!=arr[mid])
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
int lastOccurence(int arr[],int n,int value){
    int low=0,high=n-1;
    while (low<=high)
    {
        int mid=(low+high)/2;
        if (arr[mid]==value)
        {
            if(mid==n-1 || arr[mid+1]!=arr[mid])
                return mid;
            else
                low=mid+1;
        }
        else if(value>arr[mid])
            low=mid+1;
        else if(value<arr[mid])
            high=mid-1;
    }
    return -1;
}
int count(int arr[],int n,int value){
    int first=firstOccurence(arr,n,value);
    if(first==-1)
        return 0;
    int last=lastOccurence(arr,n,value);
    return last-first+1;
}
int main(){
    int n,v;
    cin>>n>>v;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<count(arr,n,v);
}