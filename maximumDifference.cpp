#include<bits/stdc++.h>
using namespace std;
int maxDiff(int arr[],int n){
    int res=arr[1]-arr[0];
    int minval=arr[0];
    for (int j = 1; j < n; j++)
    {
        res=max(res,arr[j]-minval);
        minval=min(minval,arr[j]);
    }
    return res;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<maxDiff(arr,n);
}