#include<iostream>
using namespace std;
unsigned countsetbits(unsigned int n){
	unsigned int count=0;
	while(n){
		n=n&(n-1);
		count++;
	}
	return count;
	}
bool powerof2(int n){
	if(countsetbits(n)==1){
		return true;
	}
	else
		return false;
}
int main(){
	int n;
	cin>>n;
	if(powerof2(n))
		cout<<"true"<<endl;
	else
		cout<<"false"<<endl;
}
