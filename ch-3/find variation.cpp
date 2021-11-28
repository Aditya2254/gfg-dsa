#include <iostream>
using namespace std;
int findvariation(int arr[],int n){
	int res1=0,res2=0;
	for(int i=0;i<n;i++){
		res1=res1 ^ arr[i];
	}
	for(int i=1;i<=(n+1);i++){
		res2 = res2 ^ i;
	}
	return (res1 ^ res2);
}
int main(){
	int arr[]={1,2,3,5,6,7,8,9},n=8;
	cout<<findvariation(arr, n);
}
