#include<bits/stdc++.h>
using namespace std;
void rearrange(long long *arr, int n) 
    { 
    	
    	// Your code here
    	long long maxelement=arr[n-1]+1;
    	int p=0,q=n-1,buffer;
    	for(int i=0;i<n;i++){
    	    if(i%2==0){
    	        buffer=arr[q]%maxelement;
    	        arr[i]=maxelement*buffer+arr[i];
    	        q--;
    	    }
    	    else{
    	        buffer=arr[p]%maxelement;
    	        arr[i]=maxelement*buffer+arr[i];
    	        p++;
    	    }
    	}
    	for(int i=0;i<n;i++){
    	    arr[i]=arr[i]/maxelement;
    	}
    }
int main(){
    int n;
    cin>>n;
    long long arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    rearrange(arr,n);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}