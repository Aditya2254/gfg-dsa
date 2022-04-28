#include <bits/stdc++.h>
using namespace std;
int countOfReqNumbers(int arr[], int n, int k) {
        // Your code here
    int comp=n/k;
    unordered_map<int,int> freq;
    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]+=1;
    }
    int count=0;
    for (auto i: freq)
    {
        if(i.second>comp){
            count+=1;
        }
    }
    return count;
    }
int main()
{
    int n, k, freq;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cin>>k;
    cout << countOfReqNumbers(arr, n, k);
}