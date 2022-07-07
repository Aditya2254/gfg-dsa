#include<bits/stdc++.h>
using namespace std;

struct node{
	int data;
	node *next;
	node(int n){
		data = n;
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
	cout<<endl;
}

node* insertBegin(node *head,int value){
	node *temp = new node(value);
	if(head == NULL)
		return temp;
	temp->next = head;
	return temp;
}

int FindMiddle(node *head){
	node *slow=head;
	node *fast=head;
	while(fast != NULL && fast->next != NULL){
		fast=fast->next->next;
		slow=slow->next;
	}
	return slow->data;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif

    node *head=NULL;

    head = insertBegin(head,10);
    head = insertBegin(head,20);
    head = insertBegin(head,30);
    head = insertBegin(head,40);
    head = insertBegin(head,50);
    // head = insertBegin(head,60);
    display(head);
    cout<<"Middle element is: "<<FindMiddle(head)<<endl;

}
