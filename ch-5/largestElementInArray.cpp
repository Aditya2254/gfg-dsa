#include<bits/stdc++.h>
using namespace std;
int maxelement(int arr[],int n){
    int currentmax=arr[0];
    int res=0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i]>arr[res])
        {
            res=i;
        }
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
    cout<<maxelement(arr,n);
}