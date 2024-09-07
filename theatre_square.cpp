#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,m,a;
	cin>>n>>m>>a;
	long long int p1=1,p2=1;	
	long long int ans=0;
	
	if(n%a==0)
	{
		p1=n/a;
	}
	else
	{
		p1=n/a;
		p1++;
	}
	
	if(m%a==0)
	{
		p2=m/a;
	}
	else
	{
		p2=m/a;
		p2++;
	}
	ans=p1*p2;
	cout<<ans<<endl;
	
	return 0;


};