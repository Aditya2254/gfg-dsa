#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void powerset(string str){
	int n=str.length();
	int powsize = pow(2,n);
	for(int count=0;count<=(powsize-1);count++){
		for(int j=0;j<n;j++){
			if(count&(1<<j)){
				cout<<str[j];
			}
		}
		cout<<endl;
	}
}
int main(){
	string str;
	cin>>str;
	cout<<"Enter the number: "<<endl;
	powerset(str);
}
