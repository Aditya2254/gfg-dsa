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

node* deleteTail(node *head){
	if(head == NULL)
		return NULL;
	if(head->next == NULL){
		delete(head);
		return NULL;
	}
	node *ptr = head;
	while(ptr->next->next != NULL){
		ptr=ptr->next;
		// cout<<ptr->data<<" ";
	}
	delete(ptr->next);
	ptr->next=NULL;
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

    display(head);

    head = deleteTail(head);

    display(head);

}