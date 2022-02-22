#include<bits/stdc++.h>
using namespace std;
bool notdecreasing(int arr[],int n){
    for (int i = 1; i < n; i++)
    {
        if (arr[i]<arr[i-1])
        {
            // cout<<i;
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<notdecreasing(arr,n);
}