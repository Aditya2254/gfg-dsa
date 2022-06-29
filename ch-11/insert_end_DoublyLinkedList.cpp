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

void display(node *head){
	while(head != NULL){
		cout<<head->data<<" ";
		head=head->next;
	}
}

node* insertEnd(node* head, int value){
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

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif

    node *head = NULL;

    head = insertEnd(head,10);
    head = insertEnd(head,20);
    head = insertEnd(head,30);

    display(head);

}