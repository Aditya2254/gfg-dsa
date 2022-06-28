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

void display(node *ptr){
	while(ptr!=NULL){
		cout<<ptr->data<<" ";
		ptr = ptr->next;
	}
	cout<<endl;
}

node* insertBegin(node *head_m, int value){
	node *ptr = new node(value);
	ptr->next=head_m;
	return ptr;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif

// node *head = new node(10);
// head->next = new node(20);
// head->next->next = new node(30);
// head->next->next->next = new node(40);

    node *head = NULL;
    head=insertBegin(head,40);
    head=insertBegin(head,30);
    head=insertBegin(head,20);
    head=insertBegin(head,10);

	int k;
	display(head);
	cin>>k;
	head=insertBegin(head,k);
	display(head);
}