#include<bits/stdc++.h>
using namespace std;
void toh(int n, char A, char B, char C){
	if(n==1){
		cout<<"Move disk "<<1<<" from "<< A <<" to "<< C <<"."<<endl;
		return;
	}
	toh(n-1,A,C,B);
	cout<<"Move disk "<<n<<" from "<< A <<" to "<< C <<"."<<endl;
	toh(n-1,B,A,C);
}
int noofmoves(int n){
	return (pow(2,n)-1);
}
int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
	int n;
	cin>>n;
	toh(n,'A','B','C');
	cout<<"No. of moves: "<<noofmoves(n);
}
