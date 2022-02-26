#include <bits/stdc++.h>
using namespace std;
void frequency1(int arr[], int n)
{
    int i = 1, freq = 1;
    while (i < n)
    {
        while ((i < n) && (arr[i] == arr[i - 1]))
        {
            freq++;
            i++;
        }
        cout << arr[i - 1] << " " << freq << endl;
        i++;
        freq = 1;
    }
    if ((n == 1) || (arr[n - 1] != arr[n - 2]))
    {
        cout << arr[n - 1] << " " << freq;
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    frequency1(arr,n);
}