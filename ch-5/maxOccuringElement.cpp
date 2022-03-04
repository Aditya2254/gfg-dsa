#include<bits/stdc++.h>
using namespace std;
int maxOccuring(int l[],int r[],int n){
    int arr[1000]={0};
    for (int i = 0; i < n; i++)
    {
        arr[l[i]]++;
        arr[r[i]+1]--;
    }
    int maximum=arr[0],res=0;
    for (int i = 1; i < 1000; i++)
    {
        arr[i]+=arr[i-1];
        if (maximum<arr[i])
        {
            maximum=arr[i];
            res=i;
        }
    }
    return res;
}
int main(){
    int n;
    cin>>n;
    int l[n],r[n];
    for (int i = 0; i < n; i++)
    {
        cin>>l[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin>>r[i];
    }
    cout<<maxOccuring(l,r,n);
}