#include<bits/stdc++.h>
using namespace std;
void computePrefixSum(int arr[],int n,int brr[]){
    brr[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        brr[i]=brr[i-1]+arr[i];
    }
}
int getSum(int brr[],int l, int r){
    if (l==0)
    {
        return brr[r];
    }
    else
    {
       return brr[r]-brr[l-1];
    }
}
int main(){
    int n,l,r;
    // cout<<"Enter the size: "<<endl;
    cin>>n;
    int arr[n];
    // cout<<"Enter the elements: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int prefSum[n];
    computePrefixSum(arr,n,prefSum);
    // cout<<"Enter the left and right index: "<<endl;
    cin>>l>>r;
    cout<<getSum(prefSum,l,r);
}