#include<iostream>
using namespace std;
int gcd(int a,int b)
{
	while(a!=b)
	{
		if (a>b)
		a=a-b;
		else
		b=b-a;
	}
	return a;
}
int main()
{int m,n;
cout<<"Enter the numbers: ";
cin>>m>>n;
cout<<gcd(m,n);
}
