#include <iostream>
using namespace std;
void kthbit(int n, int k){
	n >> k-1;
	if(n & 1)
		cout<<"Set"<<endl;
	else
		cout<<"Not set"<<endl;
}
int main (){
	int a=5,k;
	cout<<"The number is: "<<a<<endl;
	cout<<"Enter the bit: "<<endl;
	cin>>k;
	kthbit(a,k);
	return 0;
}
