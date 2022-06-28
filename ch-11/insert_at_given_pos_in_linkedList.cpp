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
	while(head !=NULL){
		cout<<head->data<<" ";
		head=head->next;
	}
}

node* insertEnd(node* head,int value){
	node *temp = new node(value);
	if(head == NULL)
		return temp;
	node *ptr=head;
	while(ptr->next != NULL){
		ptr=ptr->next;
	}
	ptr->next=temp;
	return head;
}

node* insertAtPos(node* head, int pos, int value){
	node *temp = new node(value);
	if(head==NULL)
		return NULL;
	if(pos==0){
		temp->next=head;
		return temp;
	}
	int c=0;
	node *ptr = head;
	while(c<pos-1 && ptr->next != NULL){
		ptr=ptr->next;
		c++;
	}
	if(c!=pos-1)
		return head;
	temp->next=ptr->next;
	ptr->next=temp;
	return head;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif

    node *head=NULL;

    head=insertEnd(head,10);
    head=insertEnd(head,20);
    head=insertEnd(head,30);
    head=insertEnd(head,40);

    head=insertAtPos(head,1,25);

    display(head);

}