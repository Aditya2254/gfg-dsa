#include<bits/stdc++.h>
using namespace std;
void arrange(long long *arr, int n) {
        // Your code here
        int buffer;
        int maxelement=n;
        for(int i=0;i<n;i++){
            buffer=arr[arr[i]%maxelement]%maxelement;
            arr[i]=maxelement*buffer+arr[i];
        }
        for(int i=0;i<n;i++){
            arr[i]=arr[i]/maxelement;
        }
    }
int main(){
    int n;
    cin>>n;
    long long arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    arrange(arr,n);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
}