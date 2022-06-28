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
	while(head!=NULL){
		cout<<head->data<<" ";
		head=head->next;
	}
}

node* insertEnd(node *head_m,int value){
	node *temp = new node(value);
	if(head_m==NULL)
		return temp;
	node *ptr = head_m;
	while(ptr->next != NULL){
		ptr=ptr->next;
	}
	ptr->next=temp;
	return head_m;
}

node* deleteEnd(node *head_m){
	if(head_m == NULL)
		return NULL;
	if(head_m->next == NULL){
		delete head_m;
		return NULL;
	}
	node *ptr = head_m;
	while(ptr->next->next != NULL){
		ptr=ptr->next;
	}
	delete(ptr->next);
	ptr->next=NULL;
	return head_m;
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

    head=deleteEnd(head);
    display(head);
}