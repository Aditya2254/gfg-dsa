#include<bits/stdc++.h>
using namespace std;
bool ispalindrome(string s,int b,int e){
    if(b >= e){
        return true;
    }
    return ((s[b] == s[e]) && ispalindrome(s,b+1,e-1));
}
int main(){
#ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    string s;
    cin>>s;
    int l=s.length();
    cout<<ispalindrome(s,0,l-1);
}