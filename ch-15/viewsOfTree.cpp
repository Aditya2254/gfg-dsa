#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	node *left;
	node *right;
	node(int n){
		data = n;
		left=NULL;
		right=NULL;
	}
};
void viewOrderTraversal(node* root)
{
	if(root==NULL)
		return;
	queue<node*> q;
	q.push(root);
	while(!q.empty())
	{
		int n=q.size();
		for(int i=1;i<=n;i++)
		{
			node* curr=q.front();
			q.pop();
			if(i==n)
			{
				cout<<curr->data<<" ";
			}
			if(curr->left)
				q.push(curr->left);
			if(curr->right)
				q.push(curr->right);
		}
	}
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
      node* root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->right->left=new node(6);
    root->right->right=new node(7);
    viewOrderTraversal(root);

}
