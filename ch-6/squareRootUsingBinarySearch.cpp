#include<bits/stdc++.h>
using namespace std;
int squareRoot(int x){
    int low=0,high=x,mid,ans=-1;
    while (low<= high)
    {
        mid=(low+high)/2;
        int temp=mid*mid;
        if(temp==x)
            return mid;
        else if(temp<x)
            {low=mid+1;
            ans=mid;}
        else if(temp>x)
            high=mid-1;
    }
    return ans;
}
int main(){
    int x;
    cin>>x;
    cout<<squareRoot(x);
}