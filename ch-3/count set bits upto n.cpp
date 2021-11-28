#include <iostream>
using namespace std;
 int countSetBits(int n)
    {
        // Your logic here
        int k,count=0,i=1;
        while(i<=n){
        	k=1;
            while(k<33){
                if (((i>>(k-1))&1)==1)
                    {
					count++;}
				k++;
            }
        i++;
    	}
    return count;
    }
int main(){
	int n;
	cout<<"Enter the number: "<<endl;
	cin>>n;
	cout<<countSetBits(n);
}
