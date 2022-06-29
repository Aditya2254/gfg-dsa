#include<bits/stdc++.h>
using namespace std;

struct node{
	node *prev;
	int data;
	node *next;
	node(int value){
		data=value;
		prev=NULL;
		next=NULL;
	}
};

node* insertBegin(node *head,int value){
	node *temp = new node(value);
	if(head == NULL)
		return temp;
	temp->next=head;
	head->prev=temp;
	return temp;
}

void display(node *head){
	while(head!= NULL){
		cout<<head->data<<" ";
		head=head->next;
	}
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

    display(head);
}