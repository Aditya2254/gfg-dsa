#include<bits/stdc++.h>
using namespace std;
void toh(int n, char A, char B, char C){
	if(n==1){
		cout<<"Move disk "<<n<<" from "<< A <<" to "<< C <<"."<<endl;
		return;
	}
	toh(n-1,A,C,B);
	cout<<"Move disk "<<n<<" from "<< A <<" to "<< C <<"."<<endl;
	toh(n-1,B,A,C);
}
int noofmoves(int n){
	if(n==1)
		return 1;
	return ((2*noofmoves(n-1))+1);
}
int main(){
	int n;
	cin>>n;
	toh(n,'A','B','C');
	cout<<"No. of moves: "<<noofmoves(n);
}
