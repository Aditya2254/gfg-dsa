#include<iostream>
using namespace std;
int factorial(int n)
{int r=1;
for(int i=2;i<=n;i++)
	{r=r*i;
	}
return r;
}
int main()
{int n;
cout<<"Enter the number: ";
cin>>n;
cout<<factorial(n);
}
