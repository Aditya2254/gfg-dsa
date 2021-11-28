//Counting the number of trailing zeroes in a factorial of a number n
#include<iostream>
using namespace std;
int counttrailingzeros(int n)
{
	int r=0;
	for(int i=5;i<=n;i=i*5)
	{
		r=r+n/i;
	}
return r;
}
int main()
{int n;
cout<<"Enter the number: ";
cin>>n;
cout<<counttrailingzeros(n);
}
