#include<iostream>
#include<vector>
using namespace std;
void sieve1(int n)									//time complexity=nloglogn(both are the same algorithm)
{
	if(n<=1)
		return;
	vector <bool> isprime(n+1,true);
	for(int i=2;i<=n;i++)
	{
		if(isprime[i])
		{
			cout<<i<<" ";
			for(int j=i*i;j<=n;j+=i)
			{
				isprime[j]=false;
			}
		}
	}
}
void sieve2(int n)									//time complexity=nloglogn
{
	if(n<=1)
		return;
	vector <bool> isprime(n+1,true);
	for(int i=2;i*i<n;i++)
	{
		if(isprime[i])
		{
			for(int j=2*i;j<=n;j+=i)
			{
				isprime[j]=false;
			}
		}
	}
	for(int i=2;i<=n;i++)
	{
		if(isprime[i])
			cout<<i<<" ";
	}
}
int main()
{
	int n;
	cout<<"Enter the number: ";
	cin>>n;
	sieve1(n);
	return 0;
}
