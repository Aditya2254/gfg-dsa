#include<bits/stdc++.h>
using namespace std;

void reverse(int arr[],int i,int n){
	if(i>=n/2)
		return;
	swap(arr[i],arr[n-1-i]);
	reverse(arr,i+1,n);
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
    	cin>>arr[i];
    }
    reverse(arr,0,n);
    for(int i=0;i<n;i++){
    	cout<<arr[i]<<" ";
    }

}
// 5
// 1 2 3 4 5