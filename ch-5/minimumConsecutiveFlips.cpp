#include<bits/stdc++.h>
using namespace std;
void printGroups(bool arr[],int n){
    for (int i = 1; i < n; i++)
    {
        if (arr[i]!=arr[i-1])                   //point of inflexion
        {
            if (arr[i]!=arr[0])                 //start of opposite group
                cout<<"from "<<i<<" to ";
            else                                //end of opposite group
                cout<<i-1<<endl;
        }
    }
    if (arr[n-1]!=arr[0])                       //corner case if last element is of same group
        cout<<n-1<<endl;
    return;
}
int main(){
    int n;
    cin>>n;
    bool arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    printGroups(arr,n);
}