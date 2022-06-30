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

void display(node *head){
	while(head!=NULL){
		cout<<head->data<<" ";
		head=head->next;
	}
	cout<<endl;
}

node* deleteHead(node *head){
	if(head == NULL || head->next == NULL){
		delete(head);
		return NULL;
	}
	head = head->next;
	delete(head->prev);
	head->prev = NULL;
	return head;
}

node* insertBegin(node *head,int value){
	node *temp = new node(value);
	if(head == NULL)
		return temp;
	temp->next = head;
	head->prev = temp;
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

    display(head);

    head = deleteHead(head);

    display(head);
}