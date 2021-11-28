#include <iostream>
using namespace std;
  int largest_pow(int n)
      {
          int i=0;
          while((1<<i)<=n)i++;
          return i-1;
      }
    int countSetBits(int n)
    {
        // Your logic here
        if(n==0)return 0;
        int x=largest_pow(n);
        int ans=x*(1<<(x-1))+n-(1<<x)+1+countSetBits(n-(1<<x));  //x*2^(x-1)+(n-2^(x)+1)+solve(n-2^x);
        return ans;
        
    }
int main(){
	int n=17;
	cout<<countSetBits(n);
}
