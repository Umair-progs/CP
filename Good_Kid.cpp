    #include <iostream>
    #include <bits/stdc++.h>
    using namespace std;
    
    int main() {
        int t;
        cin>>t;
        while(t--)
        {
            
            int n;
            cin>>n;
            vector<int>v(n,0);
            for(int i=0; i<n; i++)
            {
                cin>>v[i];
            }
            
            
            int mxind=-1;
            
            
                int maxi=INT_MAX;
                for(int i=0; i<n; i++)
                {
                    if(v[i]<maxi)
                    {
                        mxind=i;
                        maxi=v[i];
                    }
                }
            
            
            
            v[mxind]+=1;
            
            int product=1;
            
            for(int i=0; i<n; i++)
            {
                product*=v[i];
            }
            
            cout<<product<<endl;
            
            
            
            
            
        }
    	return 0;
    }