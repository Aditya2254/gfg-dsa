#include<iostream>
using namespace std;
void oddAppearing(int arr[],int n){
	int xo=0,res1=0,res2=0;
	for(int i=0;i<n;i++){
		xo = xo ^ arr[i];
	}
	int sn=xo & (~(xo-1));
	for(int i=0;i<n;i++){
		if((sn & arr[i]) !=0){
			res1=res1 ^ arr[i];
		}
		else{
			res2 = res2 ^ arr[i];
		}
	}
	cout<<res1<<" "<<res2<<endl;
}
int main() {
	
	int arr[]= {3, 4, 3, 4, 5, 4, 4, 6, 7, 7}, n = 10;
	
    oddAppearing(arr, n);
    
}
