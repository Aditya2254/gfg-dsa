#include<iostream>
using namespace std;
bool powof2(int n){
	return (n!=0)&&((n&(n-1))==0);
}
int main(){
	int n;
	cin>>n;
	if(powof2(n)==1)
		cout<<"true"<<endl;
	else
		cout<<"false"<<endl;
	return 0;
}
