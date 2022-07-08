#include<bits/stdc++.h>
using namespace std;


int queues[11];
int front=0,rear=0;

void enqueue(int n)
{
	if(rear>=11)
	{
		cout<<"queue is full"<<endl;
		exit(0);
	}
	else
	{
		queues[rear]=n;
		rear++;
	}
}
int deques()
{
	if(front<0)
	{
		cout<<"queue is empty";
		exit(0);
	}
	else if(front>rear)
	{
		cout<<"no element found";
		exit(0);
	}
	else
	{
		int temp=queues[front];
		queues[front]=0;
		front++;
		return temp;
	}

}
void display()
{
	for(int j=front;j<rear;j++)
	{
		cout<<queues[j]<<" ";
	}
	cout<<endl;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    enqueue(10);
	enqueue(15);
    enqueue(20);
	enqueue(60);
	enqueue(70);
	enqueue(80);
	display();
	deques();
	deques();
	display();

}