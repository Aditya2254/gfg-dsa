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
	while(head != NULL){
		cout<<head->data<<" ";
		head=head->next;
	}
	cout<<endl;
}

node* insertBegin(node *head,int value){
	node *temp = new node(value);
	if(head == NULL)
		return temp;
	temp->next = head;
	head->prev = temp;
	return temp;
}

node* insertEnd(node *head,int value){
	node *temp = new node(value);
	if(head == NULL)
		return temp;
	node *ptr = head;
	while(ptr->next != NULL){
		ptr=ptr->next;
	}
	ptr->next = temp;
	temp->prev = ptr;
	return head;
}

node* deleteEnd(node *head){
	if(head == NULL)
		return NULL;
	if(head->next == NULL){
		delete(head);
		return NULL;
	}
	node *ptr = head;
	while(ptr->next->next != NULL){
		ptr=ptr->next;
	}
	node *del = ptr->next;
	ptr->next = NULL;
	delete(del);
	return head;
}

node* deleteBegin(node *head){
	if(head == NULL)
		return NULL;
	if(head->next == NULL){
		delete (head);
		return NULL;
	}
	node *del = head;
	head=head->next;
	delete(del);
	head->prev = NULL;
	return head;
}

node* reverse(node *head){
	if(head == NULL)
		return NULL;
	if(head->next == NULL)
		return head;
	node *temp = NULL;
	while(head->next != NULL){
		temp = head->next;
		head->next = head->prev;
		head->prev = temp;
		head=head->prev;
	}
	head->next = head->prev;
	head->prev = NULL;
	return head;
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
    head = insertEnd(head,5);
    head = deleteEnd(head);
    head = deleteBegin(head);

    display(head);

    head = reverse(head);

    display(head);

}