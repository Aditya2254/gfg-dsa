#include<bits/stdc++.h>
using namespace std;
void dectobinary(int n){
	if(n<=0)
		return;
	dectobinary(n/2);
	cout<<n%2;
}
int main(){
	int n;
	cin>>n;
	dectobinary(n);
}
