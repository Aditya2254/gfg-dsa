#include<bits/stdc++.h>
using namespace std;

struct node{
	int data;
	node *next;
	node(int n){
		data=n;
		next=NULL;
	}
};

void display(node *head){
	while(head != NULL){
		cout<<head->data<<" ";
		head=head->next;
	}
}

node* insertBegin(node *head,int value){
	node *temp = new node(value);
	if(head == NULL)
		return temp;
	temp->next=head;
	head=temp;
	return head;
}

node* insertEnd(node *head, int value){
	node *temp = new node(value);
	if(head == NULL)
		return temp;
	node *ptr= head;
	while(ptr->next != NULL){
		ptr=ptr->next;
	}
	ptr->next = temp;
	return head;
}

node* deleteBegin(node *head){
	if(head == NULL)
		return NULL;
	node *ptr = head->next;
	delete(head);
	return ptr;
}

node* deleteEnd(node *head){
	if(head == NULL)
		return NULL;
	if(head->next == NULL){
		delete head;
		return NULL;
	}
	node *ptr=head;
	while(ptr->next->next != NULL){
		ptr=ptr->next;
	}
	delete (ptr->next);
	ptr->next=NULL;
	return head;
}

node *insertAtPos(node *head,int pos,int value){
	if(head == NULL)
		return head;
	node *temp = new node(value);
	if(pos == 0){
		temp->next = head;
		return temp;
	}
	int c=0;
	node *ptr = head;
	while(c<pos-1 && ptr->next != NULL){
		c++;
		ptr=ptr->next;
	}
	if(c!=pos-1)
		return head;
	temp->next = ptr->next;
	ptr->next=temp;
	return head;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif

    node *head = NULL;
    head=insertEnd(head,10);
    head=insertEnd(head,20);
    head=insertBegin(head,30);
    head=insertBegin(head,40);
    head=deleteEnd(head);
    head=deleteBegin(head);
    head=insertEnd(head,50);
    head=insertAtPos(head,1,25);

    display(head);

}