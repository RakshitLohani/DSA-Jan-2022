#include<bits/stdc++.h>
using namespace std;

void odd_no(int n)
{
	if(n<1)
	return ;
	odd_no(n-1);
	if(n%2!=0)
	cout<<n<<endl;
}
int main()
{
	int n;
	cin>>n;	
	odd_no(n);
}