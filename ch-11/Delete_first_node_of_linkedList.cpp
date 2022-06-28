#include<bits/stdc++.h>
using namespace std;

struct node{
	int value;
	node *next;
	node(int n){
		value=n;
		next=NULL;
	}
};

node* insertEnd(node *head_m,int value){
	node *temp = new node(value);
	if(head_m==NULL)
		return temp;
	node *ptr=head_m;
	while(ptr->next != NULL){
		ptr=ptr->next;
	}
	ptr->next=temp;
	return head_m;
}

node* deleteBegin(node *head_m){
	if(head_m==NULL)
		return NULL;
	node *ptr=head_m->next;
	delete head_m;
	return ptr;
}

void display(node *head){
	while(head!=NULL){
		cout<<head->value<<" ";
		head=head->next;
	}
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    node *head=NULL;
    head = insertEnd(head,10);
    head = insertEnd(head,20);
    head = insertEnd(head,30);
    head = insertEnd(head,40);
    head=deleteBegin(head);

    display(head);
}