#include<iostream>
using namespace std;
void printalldivisors(int n)
{
	int i=1;
	for(i;i*i<n;i++)
	{
		if(n%i==0)
			cout<<i<<" ";
	}
	for(i;i>=1;i--)
	{
		if(n%i==0)
			cout<<n/i<<" ";
	}
}
int main()
{
	int n;
	cout<<"Enter the number: ";
	cin>>n;
	printalldivisors(n);
	return 0;
}
