#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin>>t;
    while(t--)
    {
        int n,d,s;
        cin>>n;
        map<int,int>m;
         while(n--)
         {
             cin>>d>>s;
             if(!m.count(d))
             {
                 m[d]=s;
             }
             else
             {
                 m[d]=min(s,m[d]);
             }
             
         }
         
         int k;
         int i=1;
         
         while(1)
         {
             if(m.count(i))
             {
                 k=m[i];
                 break;
             }
             i++;
         }
         
         if(k%2==0)k=(k-1)/2;
         else k=k/2;
         
         while(k)
         {
             i++;
             k--;
             if(m.count(i))
             {
                 int temp=m[i];
                 if(temp%2==0)temp=(temp-1)/2;
                 else temp=temp/2;
                 
                 if(temp<=k)
                 k=temp;
             }
         }
         
         cout<<i<<endl;
         
         
         
    }

}