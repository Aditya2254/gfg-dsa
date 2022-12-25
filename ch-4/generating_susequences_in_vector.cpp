#include<bits/stdc++.h>
using namespace std;

void generateSubsequences(vector<vector<int>> &a, int arr[],int n,vector<int> v,int i=0){
	if(i>=n){
		a.push_back(v);
		return;
	}
	v.push_back(arr[i]);
	generateSubsequences(a,arr,n,v,i+1); //take condition
	v.pop_back();
	generateSubsequences(a,arr,n,v,i+1); //not take condition
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif

    vector<vector<int>> a;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
    	cin>>arr[i];
    }
    vector<int> v;
    generateSubsequences(a,arr,n,v,0);
    for(auto it:a){
    	cout<<" [";
    	for(auto x:it){
    		cout<<x;
    	}
    	cout<<"]";
    }

}