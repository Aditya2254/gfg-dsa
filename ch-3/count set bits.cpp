#include <bits/stdc++.h>				//time complexity: o(no. of bits)
using namespace std;
unsigned int countsetbits(unsigned int n){
	unsigned int count=0;
	while (n != 0) {
		if(n&1 ==1)
			count++;
		n/=2;
	}
	return count;
}
int main(){
	unsigned int n;
	cout<<"Enter the no.: ";
	cin>>n;
	cout<<countsetbits(n);
	return 0;
}
