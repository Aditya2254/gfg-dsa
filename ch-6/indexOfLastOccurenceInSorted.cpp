#include <bits/stdc++.h>
using namespace std;
int search(int arr[], int low, int high, int value, int n)
{
    int mid = (low + high) / 2;
    if (low > high)
        return -1;
    else if (arr[mid] == value)
    {
        if (mid == n - 1 || arr[mid + 1] != arr[mid])
            return mid;
        else
            return search(arr, mid + 1, high, value, n);
    }
    else if (arr[mid] > value)
        return search(arr, low, mid - 1, value, n);
    else if (arr[mid] < value)
        return search(arr, mid + 1, high, value, n);
}
int iterativeSearch(int arr[], int low, int high, int value, int n)
{
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == value)
        {
            if (mid == n - 1 || arr[mid + 1] != arr[mid])
                return mid;
            else
                low = mid + 1;
        }
        else if (value > arr[mid])
            low = mid + 1;
        else if (value < arr[mid])
            high = mid - 1;
    }
    return -1;
}
int main()
{
    int n, v;
    cin >> n >> v;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << iterativeSearch(arr, 0, n - 1, v, n);
}