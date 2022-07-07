#include<bits/stdc++.h>
using namespace std;

struct node{
	node *prev;
	int data;
	node *next;
	node(int n){
		data=n;
		prev = NULL;
		next = NULL;
	}
};

node* insertHead(node *head,int value){
	node *temp = new node(value);
	if(head == NULL){
		temp->next = temp;
		temp->prev = temp;
		return temp;
	}
	// node *ptr = head;
	head->prev->next = temp;
	temp->prev = head->prev;
	temp->next=head;
	head->prev = temp;
	return temp;
}

node* insertEnd(node *head,int value){
	node *temp = new node(value);
	if(head == NULL){
		temp->next = temp;
		temp->prev = temp;
		return temp;
	}
	temp->prev = head->prev;
	temp->next = head;
	head->prev->next = temp;
	head->prev = temp;
	return head;
}

void display(node *head){
	if(head == NULL)
		return;
	node *ptr = head;
	do{
		cout<<ptr->data<<" ";
		ptr=ptr->next;
	}
	while(ptr != head);
	cout<<endl;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif

    node *head = NULL;

    head = insertHead(head,10);
    head = insertHead(head,20);
	head = insertHead(head,30);
    head = insertHead(head,40);
    head = insertEnd(head,50);
    head = insertEnd(head,60);
    display(head);
}