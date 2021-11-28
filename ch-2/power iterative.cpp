#include<iostream>
using namespace std;										//time complexity=O(log n)
long long pow(int x, int n)									//auxilliary space=O(1)
{
	long long res=1;
	while(n>0)
	{
		if(n&1)							//if(n%2!=0)
			res=res*x;
		x=x*x;
		n=(n>>1);							//n=n/2;
	}
	return res;
}
int main()
{
	int n,x;
	cout<<"Enter the number,exponent: ";
	cin>>x>>n;
	cout<<pow(x,n);
	return 0;
}
