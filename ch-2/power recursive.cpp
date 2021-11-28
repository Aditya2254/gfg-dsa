#include<iostream>
using namespace std;
int pow(int x,int n)											//time complexity= theta(log n) 
{																//auxilliary space= theta(log n)
	if(n==0)
		return 1;
	int temp=pow(x,n/2);
	temp=temp * temp;
	if(n%2==0)
		return temp;
	else
		return temp*x;
}
int main()
{
	int n,x;
	cout<<"Enter the number,exponent: ";
	cin>>x>>n;
	cout<<pow(x,n);
	return 0;
}
