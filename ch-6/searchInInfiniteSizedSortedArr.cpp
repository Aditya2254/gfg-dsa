#include<bits/stdc++.h>
using namespace std;
int binarysearch(int arr[],int low,int high,int k){
    while (low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]==k)
            return mid;
        else if(k>arr[mid])
            low=mid+1;
        else if(k<arr[mid])
            high=mid-1;
    }
    return -1;
}
int search(int arr[],int k){
    if(arr[0]==k)
        return 0;
    int i=1;
    while (arr[i]<k)
        i*=2;
    if(arr[i]==k)
        return i;
    else{
        return binarysearch(arr,(i/2)+1,i-1,k);
    }
}
int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<search(arr,k);
}