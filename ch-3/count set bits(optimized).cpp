#include <bits/stdc++.h>					//time complexity: o(log n)
using namespace std;
unsigned int countsetbits(unsigned int n){
	unsigned int count=0;
	while (n) {
		n= n&(n-1);
		count++;
	}
	return count;
}
int main(){
	unsigned int n;
	cout<<"Enter the no.: "<<endl;
	cin>>n;
	cout<<countsetbits(n);
	return 0;
}
