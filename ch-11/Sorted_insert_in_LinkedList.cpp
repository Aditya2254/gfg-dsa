#include<bits/stdc++.h>
using namespace std;

struct node{
	int data;
	node *next;
	node(int n){
		data=n;
		next = NULL;
	}
};

void display(node *head){
	if(head == NULL)
		return;
	while(head != NULL){
		cout<<head->data<<" ";
		head=head->next;
	}
}

node* sortedInsert(node *head,int value){
	node *temp = new node(value);
	if(head == NULL)
		return temp;
	if(value < head->data){
		temp->next = head;
		return temp;
	}
	node *ptr = head;
	while(ptr->next != NULL && value>ptr->next->data){
		ptr=ptr->next;
	}
	temp->next = ptr->next;
	ptr->next = temp;
	return head;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif

    node *head = NULL;

    head = sortedInsert(head,10);
    head = sortedInsert(head,5);
    head = sortedInsert(head,7);
    head = sortedInsert(head,20);
    // display(head);
    head = sortedInsert(head,30);
    head = sortedInsert(head,40);
    head = sortedInsert(head,25);
    head = sortedInsert(head,1);
    display(head);

}