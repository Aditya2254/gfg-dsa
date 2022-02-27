#include<bits/stdc++.h>
using namespace std;
int max1s(int arr[],int n){
    int res=0,temp=0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==1)
        {
            temp++;
            res=max(res,temp);
        }
        else
        {
            temp=0;
        }
    }
    // res=max(res,temp);
    return res;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << max1s(arr, n);
}