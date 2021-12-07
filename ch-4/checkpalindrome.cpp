#include<bits/stdc++.h>
using namespace std;
bool checkpalindrome(string s,int b,int e){
	if(b >= e)
		return true;
	return ((s[b] == s[e]) && checkpalindrome(s,b+1,e-1));
}
int main(){
	string s;
	cin>>s;
	int l=s.length();
	if(checkpalindrome(s,0,l-1))
		cout<<"true.";
	else
		cout<<"false.";
}
