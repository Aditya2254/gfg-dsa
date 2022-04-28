#include<bits/stdc++.h>
using namespace std;
vector<int> subarraySum(int arr[], int n, long long s)
    {
        // Your code here
        vector<int> res;
        long long sum=0;
        int l=0;
        for(int i=0;i<n;i++){
            sum=sum+arr[i];
            while(sum>s){
                sum=sum-arr[l];
                l++;
            }
            if(sum==s){
                res.push_back(l+1);
                res.push_back(i+1);
                return res;
            }
        }
        res.push_back(-1);
        return res;
    }
int main(){
    int n,s;
    cin>>n>>s;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    vector<int> res;
    res=subarraySum(arr,n,s);
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
}