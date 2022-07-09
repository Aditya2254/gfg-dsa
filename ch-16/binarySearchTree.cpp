#include<bits/stdc++.h>
using namespace std;

struct node{
	int data;
	node *left;
	node *right;
	node(int n){
		data=n;
		left=NULL;
		right=NULL;
	}
};

node* insert(node *root,int val){
	if(root == NULL)
		return new node(val);
	if(val<root->data)
		root->left = insert(root->left,val);
	else
		root->right = insert(root->right,val);
	return root;
}

int search(node *root,int val){
	if(root == NULL)
		return -1;
	if(root->data == val)
		return 1;
	if(val < root->data){
		search(root->left,val);
	}
	else
		search(root->right,val);
}

void inorder(node *root){
	if(root == NULL)
		return;
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    node *root = NULL;
    root = insert(root,10);
    root = insert(root,5);
    root = insert(root,15);
    root = insert(root,7);
    root = insert(root,3);
    root = insert(root,13);
    root = insert(root,17);
    root = insert(root,16);
    inorder(root);
    cout<<search(root,17);
}