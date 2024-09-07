#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        string res="";
        cin>>res;
        string ans="";
        
        int n=res.size();
        
        
        
        if(n>10)
        {
            int mid=n-2;
            ans+=res[0];
            ans+=to_string(mid);
            ans+=res[n-1];
            cout<<ans<<endl;
        }
        else cout<<res<<endl;
        
        
        
    }
    
	return 0;
}