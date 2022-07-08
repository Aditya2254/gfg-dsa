#include<bits/stdc++.h>
using namespace std;

struct node{
	 int data;
	 node *next;
	 node(int n){
	 	data=n;
	 	next = NULL;
	 }
};

void display(node *head){
	if(head == NULL)
		return;
	while(head != NULL){
		cout<<head->data<<" ";
		head=head->next;
	}
	cout<<endl;
}

bool isLoop(node *head){
	if(head == NULL)
		return false;
	node *fast=head;
	node *slow=head;
	while(fast->next != NULL && fast!=NULL){
		slow=slow->next;
		fast=fast->next->next;
		if(slow == fast)
			return true;
	}
	return false;
}

node* insertBegin(node *head,int value){
	node *temp = new node(value);
	if(head == NULL)
		return temp;
	temp->next = head;
	return temp;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif

    node *head = NULL;
    head = insertBegin(head,10);
    head = insertBegin(head,20);
    head = insertBegin(head,30);
    head = insertBegin(head,40);
    head = insertBegin(head,50);
    head->next->next->next->next->next = head->next;

    if(isLoop(head))
    	cout<<"Contains loop."<<endl;
    else
    	cout<<"Doesn't contains loop."<<endl;
}