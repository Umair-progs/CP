#include <bits/stdc++.h>
using namespace std;

int main() {
    
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b,c;
	    cin>>a>>b>>c;
	    
	    int count=0;
	    
	    if(a==b) cout<<0<<endl;
	    else if(a<b)
	    {
	        while(a<b)
	        {
	 
	            b=b-c;
	            a+=c;
	            count++;
	        }
	        cout<<count<<endl;
	    }
	    else
	    {
	        while(a>b)
	        {
	            
	            a=a-c;
	            b+=c;
	            count++;
	        }
	        cout<<count<<endl;
	    }
	    
	    
	}
	return 0;
}