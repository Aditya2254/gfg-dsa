#include<bits/stdc++.h>
using namespace std;
bool pairWithSumX(int arr[], int x,int n){
    // int n=sizeof(arr)/sizeof(arr[0]);
    // int n=*(&arr + 1)-arr;
    int low=0,high=n-1;
    while (low<high)
    {
        if(arr[low]+arr[high]==x)
            return true;
        else if(arr[low]+arr[high]>x)
            high-=1;
        else
            low+=1;
    }
}
int main(){
    int n,x;
    cin>>n>>x;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<pairWithSumX(arr,x,n);
}