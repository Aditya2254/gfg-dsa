#include<bits/stdc++.h>
using namespace std;


int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    // cout<<"hoho";
    int v;
    int e;
    cin>>v;
    cin>>e;
    //vector<vector<int>> adj(v);
    int arr[v][v];
    for(int i=0;i<v;i++)
    {
        for(int j=0;j<v;j++)
        {
            arr[i][j]=0;
        }
    }
    for(int i=0;i<e;i++)
    {
    	int host,dest;
    	cin>>host>>dest;
    	arr[host-1][dest-1]=1;
    	arr[dest-1][host-1]=1;
    }
    for(int i=0;i<v;i++)
    {
    	for(int j=0;j<v;j++)
    	{
    		cout<<arr[i][j]<<" ";
    	}
    	cout<<endl;
    }


}