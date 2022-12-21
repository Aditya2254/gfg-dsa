#include<bits/stdc++.h>
using namespace std;
bool ispalindrome(string s,int i=0){
    if(i >= s.size()/2){
        return true;
    }
    return ((s[i] == s[s.size()-1-i]) && ispalindrome(s,i+1));
}
int main(){
#ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    string s;
    cin>>s;
    int l=s.length();
    cout<<ispalindrome(s);
}