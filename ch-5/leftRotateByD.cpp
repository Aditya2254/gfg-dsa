#include <bits/stdc++.h>
using namespace std;
void reverse(int arr[], int low, int high)
{
    while (low < high)
    {
        int temp = arr[low];
        arr[low] = arr[high];
        arr[high] = temp;
        low++;
        high--;
    }
}
void rotateByD(int arr[], int d, int n)
{
    reverse(arr, 0, d - 1);
    reverse(arr, d, n - 1);
    reverse(arr, 0, n - 1);
}
int main()
{
    int n, d;
    cin >> n >> d;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    rotateByD(arr, d, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
}