// https://practice.geeksforgeeks.org/problems/count-only-repeated2047/1/?track=DSASP-Searching&batchId=154#
#include <bits/stdc++.h>
using namespace std;
int firstOccurence(int arr[], int n, int value)
{
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == value)
        {
            if (mid == 0 || arr[mid - 1] != arr[mid])
                return mid;
            else
                high = mid - 1;
        }
        else if (value > arr[mid])
            low = mid + 1;
        else if (value < arr[mid])
            high = mid - 1;
    }
    return -1;
}
int lastOccurence(int arr[], int n, int value)
{
    int low = 0, high = n - 1;
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
int count(int arr[], int n, int value)
{
    int first = firstOccurence(arr, n, value);
    if (first == -1)
        return 0;
    int last = lastOccurence(arr, n, value);
    return last - first + 1;
}
pair<int, int> findRepeating(int *arr, int n)
{
    // code here
    int begin = 0, end = n - 1, mid, value, freq = 0;
    if (begin == end)
    {
        value = -1;
        freq = -1;
        return {value, freq};
    }
    while (begin < end)
    {
        mid = (begin + end) / 2;
        if ((end - begin) == (arr[end] - arr[begin]))
        {
            return {-1, -1};
        }
        else if (arr[mid - 1] == arr[mid] || arr[mid + 1] == arr[mid])
        {
            value = arr[mid];
            break;
        }
        else if ((arr[mid] - arr[begin]) < (mid - begin))
        {
            end = mid - 1;
        }
        else
        {
            begin = mid + 1;
        }
    }
    freq = count(arr, n, value);
    return {value, freq};
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
    pair<int, int> ans;
    ans = findRepeating(arr, n);
    cout << ans.first << " " << ans.second << endl;
}