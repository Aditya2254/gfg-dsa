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

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif

    node *head = new node(10);												//this is the conventional way of creating a linked list.
    node *first = new node(20);
    node *second = new node(30);
    head->next=first;
    first->next=second;

    cout<<head->data<<"->"<<first->data<<"->"<<second->data<<endl;

    // node *head = new node(10);											//this is not the conventional way of creating a linked list.
    // head->next = new node(20);
    // head->next->next = new node(30);

    // cout<<head->data<<"->"<<head->next->data<<"->"<<head->next->next->data<<endl;
}