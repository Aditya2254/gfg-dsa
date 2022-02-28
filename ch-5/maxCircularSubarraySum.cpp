#include<bits/stdc++.h>
using namespace std;
int maxSubarrSum(int arr[],int n){          //kadane's algorithm.
    int res=arr[0],curr=arr[0];
    for (int i = 1; i < n; i++)
    {
        curr=max(curr+arr[i],arr[i]);
        res=max(res,curr);
    }
    return res;
}
int overallSum(int arr[],int n){
    int normal_max=maxSubarrSum(arr,n);     //returns the max sum of normal subarrays.
    if (normal_max<0)                       //if the max sum of normal subarrays is negative, then all the elements are negative. so the max is normal max subarray.
    {
        return normal_max;
    }
    int arr_sum=0;                          //this is the sum of the entire array.
    for (int i = 0; i < n; i++)
    {
        arr_sum+=arr[i];
        arr[i]=-arr[i];                     //this inverts the array elements.
    }
    /*//for max circular subarrays sum,all we have to do is subtract the min subarray from the arr sum.
    hence we just invert the subarray and max subarr sum of an inverted arr is min subarr sum of the original array.
    and finally we add it instead of subtracting cos it's already inverted.
    */
    int circular_max=arr_sum + maxSubarrSum(arr,n);
    return max(normal_max,circular_max);
}
//time complexity: O(n)
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<overallSum(arr,n);
}