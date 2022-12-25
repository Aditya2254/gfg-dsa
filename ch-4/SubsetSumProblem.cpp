#include <bits/stdc++.h>
using namespace std;

int countSubsets(int arr[], int n, int sum)				//this returns the count of such subsequences.
{
	if(n==0)
		return sum==0? 1 : 0;

	return countSubsets(arr, n-1, sum) + countSubsets(arr, n-1, sum - arr[n-1]);
}

void findSubsets(int arr[],int n,int sum,vector<int> v, vector<vector<int>> &a){		//this returns the subsequences
	if(n==0){
		if(sum == 0){
			a.push_back(v);
		}
		return;
	}
	v.push_back(arr[n-1]);
	findSubsets(arr,n-1,sum-arr[n-1],v,a);
	v.pop_back();
	findSubsets(arr,n-1,sum,v,a);
}

bool findFirstSubset(int arr[],int n,int sum,vector<int> v, vector<vector<int>> &a){		//this returns the first subsequence and doesn't bother making further calls once it finds the first.
	if(n==0){
		if(sum == 0){			//there's a better way of doing this by just making this function take vector<int> and that will do, i did this to show the changes to be made from the above function to achieve this result.
			a.push_back(v);
			return true;
		}
		return false;
	}
	v.push_back(arr[n-1]);
	if(findFirstSubset(arr,n-1,sum-arr[n-1],v,a) == true)
		return true;
	v.pop_back();
	if(findFirstSubset(arr,n-1,sum,v,a) == true)
		return true;
	return false;
}

int main() {
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
   
   	int n = 3, arr[]= {1,2,1}, sum = 2;
   	
   	cout<<"No. of subsequences: "<<countSubsets(arr, n, sum)<<endl;

    vector<vector<int>> a;
    vector<int> v;
    cout<<"All subsequences: ";
    findSubsets(arr,n,sum,v,a);
    for(auto it:a){
   		cout<<"[";
   		for(auto x:it){
   			cout<<x<<" ";
   		}
   		cout<<"]";
   	}
   	// cout<<a.size();
   	a.clear();
   	v.clear();
   	// vector<vector<int>> b;
   	// vector<int> k;
   	findFirstSubset(arr,n,sum,v,a);
   	cout<<endl<<"First subsequence: ";
   	// cout<<a.size();
   	for(auto it:a){
   		cout<<"[";
   		for(auto x:it){
   			cout<<x<<" ";
   		}
   		cout<<"]";
   	}


   	
   	return 0;
}