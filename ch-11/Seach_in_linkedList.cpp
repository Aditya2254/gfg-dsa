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

int search(node *head,int value){
	int count=1;
	node *ptr=head;
	while(ptr != NULL){
		if(ptr->data == value){
			return count;
		}
		ptr=ptr->next;
		count++;
	}
	return -1;
}

int searchRecursive(node *head,int value,int count=1){
	if(head == NULL)
		return -1;
	if(head->data == value)
		return count;
	return searchRecursive(head->next, value,count+=1);
}

node* insertBegin(node *head, int value){
	node *temp = new node(value);
	if(head==NULL)
		return temp;
	temp->next=head;
	return temp;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif

    node *head=NULL;
    head=insertBegin(head,10);
    head=insertBegin(head,20);
    head=insertBegin(head,30);
    head=insertBegin(head,40);
    head=insertBegin(head,50);
    head=insertBegin(head,60);
    head=insertBegin(head,70);
    cout<<search(head,10)<<endl;
    cout<<searchRecursive(head,10);
    // display(head);
}