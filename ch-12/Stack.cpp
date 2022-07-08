#include<bits/stdc++.h>
using namespace std;

int stacks[11];
int top=0;

void push(int n)
{
	if(top>=11)
	{
		cout<<"stack overflow";
		return;
	}
	else
	{
		stacks[top]=n;
		top++;
	}
	
}
int peek()
{
	return stacks[top];
}
int pop()
{
	if(top<=0)
	{
		cout<<"stack underflow";
		exit(0);
	}
	int temp=stacks[top-1];
	top--;
	return temp;
}
void display()
{
	for(int i=top-1;i>=0;i--)
	{
		cout<<stacks[i]<<" ";
	}
	cout<<endl;
}
int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
push(5);

push(8);
display();
cout<<pop();
cout<<pop()<<endl;
cout<<pop()<<endl;
cout<<pop()<<endl;
cout<<endl;
display();
cout<<peek();
}