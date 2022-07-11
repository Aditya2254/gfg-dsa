#include<bits/stdc++.h>
using namespace std;

void bubblesort(int arr[],int n){						//O(n^2),stable,in-place algorithm;
	bool swapped=false;
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-1-i;j++){
			if(arr[j]>arr[j+1]){
				swap(arr[j],arr[j+1]);
				swapped = true;
			}
		}
		if(!swapped)
			return;
	}
}

void selectionSort(int arr[],int n){				//theta(n^2),not stable,in-place algorithm,Does relatively less memory writes.
	int p=0;
	for(int i=0;i<n;i++){
		int temp_i=i;
		// int temp_v=INT_MAX;
		for(int j=i+1;j<n;j++){
			if(arr[j]<arr[temp_i]){
				temp_i = j;
			}
		}
		swap(arr[i],arr[temp_i]);
	}
}

void insertionSort(int arr[],int n){				//O(n^2){reverse sorted arr},phi(n){sorted arr},stable,in-place algorithm,used for small arrays,it is generally used in combination with other sorting algorithms.
	for(int i=1;i<n;i++){
		int key = arr[i];
		int j = i-1;
		while(j>=0 && arr[j]>key){
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1] = key;
	}
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif

   	int arr[]={2,4,1,3,6,3,5,7,4,7,4,7,8,5,4,3,43,5,6,7,9,8,0};
   	int n = sizeof(arr)/sizeof(arr[0]);
   	insertionSort(arr,n);
   	for(int i=0;i<n;i++){
   		cout<<arr[i]<<" ";
   	}
}