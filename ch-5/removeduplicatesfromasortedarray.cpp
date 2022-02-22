#include<bits/stdc++.h>
using namespace std;
int removedupes(int arr[],int n){
    int j=1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i]!=arr[j-1])
        {
            arr[j]=arr[i];
            j++;
            // cout<<j<<" ";
        }
    }
    return j;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    n=removedupes(arr,n);
    cout<<n;
    // for (int i = 0; i < n; i++)
    // {
    //     cout<<" "<<arr[i]<<" ";
    // }
    
}