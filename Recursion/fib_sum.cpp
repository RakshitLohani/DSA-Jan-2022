#include<bits/stdc++.h>
using namespace std;

int fib(int n)
{
	static int sum=0;
	
	if(n<=1)
	return n;
	
	return sum=sum+fib(n-1)+fib(n-2);
	
}

int main()
{
	int i,n,x,sum=0;
	cin>>n;
	sum=fib(n);
	cout<<sum;
}
