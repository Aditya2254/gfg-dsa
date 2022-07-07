#include<bits/stdc++.h>
using namespace std;

struct node{
	node *next;
	int data;
	node(int n){
		data=n;
		next = NULL;
	}
};

node *head = NULL;										//head pointer should be global variable.

void push(int value){
	node *temp = new node(value);
	if(!temp){											//if the space in stack(heap) is full, exit.
		cout<<"StackOverflow"<<endl;
		exit(0);
	}
	temp->next = head;
	head = temp;
	return;
}

bool isEmpty(){
	return head == NULL;
}

int pop(){
	if(isEmpty()){
		cout<<"Stack Underflow"<<endl;
		exit(1);
	}
	int a=head->data;
	node *ptr = head;
	head = head->next;
	delete ptr;
	return a;
	}

void display(node *head){
	if(isEmpty()){
		cout<<"Stack Underflow"<<endl;
		exit(10);
	}
	while(head != NULL){
		cout<<head->data<<" ";
		head=head->next;
	}
	cout<<endl;
}

int peek(){
	if(!isEmpty()){
	return head->data;
	}
	cout<<"Stack Underflow"<<endl;
	exit(11);
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif

    push(10);
    push(20);
    push(30);
    push(40);
    display(head);
    cout<<"Top element is: "<<peek()<<endl;
    cout<<pop()<<endl;
    cout<<pop()<<endl;
    push(50);
    cout<<"Top element is: "<<peek()<<endl;
    display(head);

}