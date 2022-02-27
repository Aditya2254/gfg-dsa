#include<bits/stdc++.h>
using namespace std;
int maximumsumofsubarroflenk(int arr[],int n,int k){
    int windowsum=0,maxsum=0;
    if (k>n)
    {
        cout<<"invalid input "<<endl;
        return 0;
    }
    
    for (int j = 0; j < k; j++)
    {
        windowsum=windowsum+arr[j];
    }
        maxsum=windowsum;
    for (int i = 1; i <= n-k; i++)
    {
        windowsum=windowsum-arr[i-1]+arr[i+k-1];
        // cout<<windowsum<<" ";
        if (windowsum>maxsum)
        {
            maxsum=windowsum;
        }
    }
    return maxsum;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    // cout<<maximumsumofsubarroflenk(arr,n,k);
    int ans=arr[0];
    for (int k = 1; k <= n; k++)
    {
        ans=max(ans,maximumsumofsubarroflenk(arr,n,k));
    }
    cout<<ans;
}