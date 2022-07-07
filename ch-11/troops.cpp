#include<bits/stdc++.h>
using namespace std;

int noOfDays(int n,int x){
    int days=0;
    for(int troops=0;troops<=n;troops=troops+x){
        days++;
    }
    return days;
}


int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    int n;
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++){
        int t;
        cin>>t;
        arr.push_back(t);
    }
    cout<<"hoho";
    sort(arr.begin(),arr.end());
    int sum = 0;
    for(int i=0;i<n;i++){
        int x=1;
        sum = sum + noOfDays(arr[i],x);
        cout<<"sum"<<sum<<" ";
        x++;
    }
    cout<<sum;


}