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

void preorder(node* root)
{
	if(root==NULL)
	{
		return;
	}
	cout<<root->data<<" ";
	preorder(root->left);
	preorder(root->right);
}
void inorder(node* root)
{
	if(root==NULL)
	{
		return;
	}
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}
void postorder(node* root)
{
	if(root==NULL)
	{
		return;
	}
	postorder(root->left);
	postorder(root->right);
	cout<<root->data<<" ";
}
int search(int val,node *root){
	int flag = 0;
	if(root == NULL){
		return flag;
	}
	if(root->data == val){
		// cout<<"Found."<<endl;
		flag =1;
		return flag;
	}
	search(val,root->left);
	search(val,root->right);
	// cout<<"Not Found"<<endl;
}

void levelOrderTraversal(node* root)
{
	int counter=0;
	int sum=0;
	int height=1;
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
			counter++;
			sum+=curr->data;
			q.pop();
			if(curr->left)
				q.push(curr->left);
			if(curr->right)
				q.push(curr->right);
		}
	}
	cout<<endl<<counter<<" ";
	cout<<endl<<sum<<" ";
	//cout<<height<<endl;
}

int height(node *root){
	if(root == NULL){
		return 0;
	}
	int l=height(root->left);
	int r=height(root->right);
	// cout<<"height:"<<height<<endl;
	return max(l,r)+1;
}

int sum(node *root){
	if(root == NULL)
		return 0;
	int s=root->data+sum(root->left)+sum(root->right);
	return (s);
}

int count(node *root){
	if(root == NULL)
		return 0;
	int c=1+count(root->left)+count(root->right);
	return c;
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
    preorder(root);
    cout<<endl;
    inorder(root);
    cout<<endl;
    postorder(root);
    cout<<endl;
    if(search(9,root))
    	cout<<"Found"<<endl;
    else
    	cout<<"Not found";
    cout<<endl;
    levelOrderTraversal(root);
    //cout<<height(root)<<endl;
    //cout<<sum(root);
   // cout<<endl<<count(root);
    return 0;


}