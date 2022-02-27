#include <bits/stdc++.h>
using namespace std;
long long trappingRainwater(int arr[], int n)
{
    long long res = 0;
    int lmax[n], rmax[n];
    lmax[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        lmax[i] = max(arr[i], lmax[i - 1]);
    }
    rmax[n - 1] = arr[n - 1];
    for (int j = n - 2; j >= 0; j--)
    {
        rmax[j] = max(arr[j], rmax[j + 1]);
    }
    for (int i = 1; i < n - 1; i++)
    {
        res += min(lmax[i], rmax[i]) - arr[i];
    }
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
    cout << trappingRainwater(arr, n);
}