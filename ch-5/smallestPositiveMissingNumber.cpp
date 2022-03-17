//https://practice.geeksforgeeks.org/problems/smallest-positive-missing-number-1587115621/1/?track=DSASP-Arrays&batchId=154#
#include<bits/stdc++.h>
using namespace std;
int missingNumber(int arr[],int n){
    sort(arr,arr+n);
    int x=1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==x)
            x++;
    }
    return x;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<missingNumber(arr,n);
}