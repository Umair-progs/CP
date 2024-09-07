#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b;
	    cin>>a>>b;
	    bool found=false;
	    int u,v;
	    for(int i=1; i<=b; i++)
	    {
	        for(int j=1; j<=b; j++)
	        {
	            if(i+j<=b && i+j>=a && __gcd(i,j)!=1)
	            {
	                found=true;
	                u=i;
	                v=j;
	            }
	            if(found)break;
	        }
	        if(found)break;
	    }
	    
	    if(found)cout<<u<<" "<<v<<endl;
	    else cout<<-1<<endl;
	}
}