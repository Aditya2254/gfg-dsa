#include<bits/stdc++.h>
using namespace std;

struct node{
	int val;
	node *next;
	node(int data)
	{
		val=data;
		next=NULL;
	}
};

node* head=NULL;
node* tail=NULL;

void push(int val)
{
	node *n=new node(val);
	if(tail==NULL)
	{
		tail=n;
		head=n;
		return;
	}
	node* temp=tail;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	tail->next=n;
	tail=n;
	
}
int pop()
{
	if(head==NULL)
	{
		return -1;
	}
	if(head==tail)
	{
		tail=NULL;

	}
	int a=head->val;
	node* temp=head;
	head=head->next;
	delete temp;
	return a;
}
void display()
{
	node* temp=head;
	while(temp!=NULL)
	{
		cout<<temp->val<<"->";
		temp=temp->next;
	}
	cout<<"NULL"<<endl;
}



int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
push(5);
push(6);
push(7);
push(8);
display();
pop();
display();
pop();
display();
}