//Advantages of Circular linked list
//We can traverse the linked list from any node.
//Implementation of algorithms like round robin is easy.
//We can insert at the beginning and end by just maintaining just one tail pointer/reference.
//Disadvantages of Circular linked list
//Implementation of operations become complex.
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

// node* insertBegin(node *head,int value){					//o(n) time complexity
// 	node *temp  = new node(value);
// 	if(head == NULL){
// 		temp->next=temp;
// 		return temp;
// 	}
// 	node *ptr = head;
// 	while(ptr->next != head){								//traverse till end and insert there
// 		ptr=ptr->next;
// 	}
// 	ptr->next = temp;
// 	temp->next = head;
// 	return temp;											//return the new node as head
// }

node* insertBeginoptimised(node *head,int value){			//o(1) time complexity
	node *temp = new node(value);
	if(head == NULL){
		temp->next = temp;
		return temp;
	}
	temp->next = head->next;								//inserting new node after head
	head->next = temp;
	temp->data = head->data;								//swapping data with head
	head->data = value;
	return head;											//return the same head holding new data.
}

node* insertEnd(node *head,int value){						//o(1) time complexity
	node *temp = new node(value);
	if(head == NULL){
		temp->next = temp;
		return temp;
	}
	temp->next = head->next;								//inserting new node after head
	head->next = temp;
	temp->data = head->data;								//swapping data with head
	head->data = value;	
	return temp;											//return the new node holding old head data.
}

// void displayFor(node *head){
// 	if(head == NULL)
// 		return;
// 	cout<<head->data<<" ";
// 	for(node *p = head->next;p != head;p=p->next){
// 		cout<<p->data<<" ";
// 	}
// 	cout<<endl;
// }

void display(node *head){				//better one
	if(head == NULL)
		return;
	node *p = head;
	do{
		cout<<p->data<<" ";
		p=p->next;
	}while(p != head);
	cout<<endl;
}

node* deleteHead(node *head){			//o(1) time complexity
	if(head == NULL)
		return NULL;
	if(head->next == head){
			delete head;
			return NULL;}
	int a;
	head->data = head->next->data;		//copying data of the second node in head;
	node *temp = head->next;
	head->next=head->next->next;		//bypassing second node
	delete temp;						//delete second node
	return head;						//return same head with data of second node.
}

node* deleteKthNode(node *head, int k){
	if(head == NULL)
		return NULL;
	if(k==1)
		return deleteHead(head);
	node *ptr = head;
	for(int i=1;i<k-1;i++){
		// if(ptr = head)
		// 	return head;
		ptr=ptr->next;
	}
	if(ptr->next == head)
		return deleteHead(head);
	node *temp = ptr->next;
	ptr->next = ptr->next->next;
	delete temp;
	return head;
}
int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    // node *head = NULL;
    node *head = new node(10);
    // head->next = head;
    head->next = new node(20);
    head->next->next = new node(30);
    head->next->next->next = head;

    display(head);
    head=insertBeginoptimised(head,5);
    display(head);
    head = insertEnd(head,35);
    display(head);
    head = deleteHead(head);
    display(head);
    head = deleteKthNode(head,3);
    display(head);

}