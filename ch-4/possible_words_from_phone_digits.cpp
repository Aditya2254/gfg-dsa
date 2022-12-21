#include<bits/stdc++.h>
using namespace std;

void solve(int i,int n,string curr,string words[],vector<string> &ans){
	if(i == n){
		ans.push_back(curr);
		curr.clear();
		return;
	}
	for(int j=0;j<words[i].length();j++){
		solve(i+1,n,curr+words[i][j],words,ans);
	}
}

vector<string> possiblewords(int a[], int n){
	vector <string> ans;
	string words[n];
	string keypad[] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
	for(int i=0;i<n;i++){
		words[i] = keypad[a[i]];
	}
	solve(0,n,"",words,ans);
	return ans;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
    	cin>>a[i];
    }
    vector<string> res;
    res = possiblewords(a,n);
    for(auto it:res){
    	cout<<it<<" ";
    }
}