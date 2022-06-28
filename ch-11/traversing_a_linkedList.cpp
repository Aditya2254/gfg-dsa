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

void traverse(node *ptr){										//iterative traversal of a linked list; time complexity=o(n), aux space=o(1);
    
    while(ptr!= NULL){
    	cout<<ptr->data<<" ";
    	ptr = ptr->next;
    }
    cout<<endl;
}
void recursiveTraversal(node *ptr){								//recursive traversal of a linked list; time complexity=o(n), aux space=o(n);
	if(ptr==NULL)
		return;
	cout<<ptr->data<<" ";
	recursiveTraversal(ptr->next);
}
int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif

    node *head = new node(10);
    head->next = new node(20);
    head->next->next = new node(30);

    traverse(head);
    recursiveTraversal(head);
}