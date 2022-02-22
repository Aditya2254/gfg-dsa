#include<bits/stdc++.h>
using namespace std;
int secondlargest(int arr[],int n){
    int a=0,b=-1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i]>arr[a])
        {
            b=a;
            a=i;
        }
        else
        {
            if (arr[i]!=arr[a])
            {
                if((b==-1)||(arr[i]>arr[b]))
                    b=i;
            }
        }
    }
    return b;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<secondlargest(arr,n);
}