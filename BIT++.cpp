#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	int ans=0;
	while(n--)
	{
	    string res;
	    cin>>res;
	    if(res=="++X") ++ans;
	    else if(res=="--X") --ans;
	    else if(res=="X++") ans++;
	    else ans--;
	}
	
	cout<<ans<<endl;
}