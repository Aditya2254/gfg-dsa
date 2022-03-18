#include <bits/stdc++.h>
using namespace std;
int binarySearch(int arr[], int low, int high, int value)
{ // time complexity: O(logn) aux space: O(logn)
    int mid = (low + high) / 2;
    if (arr[mid] == value)
        return mid;
    else if (low > high)
        return -1;
    else if (arr[mid] > value)
        return binarySearch(arr, low, mid - 1, value);
    else if (arr[mid] < value)
        return binarySearch(arr, mid + 1, high, value);
}
int binarySearchIterative(int arr[], int low, int high, int value)
{ // time complexity: O(logn) aux space: O(1) more efficient
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == value)
            return mid;
        else if (arr[mid] > value)
            high = mid - 1;
        else if (arr[mid] < value)
            low = mid + 1;
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
    cout << binarySearchIterative(arr, 0, n - 1, v);
}