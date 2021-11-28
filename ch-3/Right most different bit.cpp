#include<iostream>
using namespace std;
int rightmostdiffbit(int m, int n){
	int a;
	a=(m ^ n);
	for(int i=1;i<=32;i++){
		if ((1 & a)==1){
			return i;
		}
		else{
			a = a >> 1;
		}
	}
	return -1;
}
int main(){
	int m=52,n=4;
	cout<<rightmostdiffbit(m,n);
	return 0;
}
