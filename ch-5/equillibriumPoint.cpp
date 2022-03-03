#include<bits/stdc++.h>
using namespace std;
void computePrefSum(int arr[],int n,int brr[]){
    brr[0]=arr[0];
    for (int i = 1; i < n; i++)
    {
        brr[i]=brr[i-1]+arr[i];
    }
}
int getSum(int brr[],int l,int r){
    if (l==0)
    {
        return brr[r];
    }
    else
    {
        return brr[r]-brr[l-1];
    }
}
int findEqPoint(int arr[],int brr[],int n){
    if (getSum(brr,1,n-1)==0)
    {
        return 0;
    }
    for (int i = 1; i < n-1; i++)
    {
        if (getSum(brr,0,i-1)==getSum(brr,i+1,n-1))
        {
            return i;
        }
    }
    if (getSum(brr,0,n-2)==0)
    {
        return n-1;
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    int arr[n],brr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    computePrefSum(arr,n,brr);
    cout<<findEqPoint(arr,brr,n);
}