#include <bits/stdc++.h>
#define ll long long
using namespace std;

//LCM FUNCTION
long long gcd(long long int a, long long int b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}

// Function to return LCM of two numbers 
long long lcm(long long int a,long long int b)
{
    return (a / gcd(a, b)) * b;
}


void solve() {
    int n;
    cin>>n;
    vector<vector<string>>res(2*n+1,vector<string>(2*n+1," "));
    
    for(int i=0; i<=(2*n+1)/2; i++)
    {
        int mid=(2*n+1)/2;
        int counter=0;

        for(int j=mid-i; j<=mid+i; j++)
        {
            if(j<mid)res[i][j]=to_string(counter++);
            else if(j==mid)res[i][j]=to_string(counter--);
            else res[i][j]=to_string(counter--);
        }
    }

    for(int i=(2*n+1)/2+1; i<(2*n+1); i++)
    {
        for(int j=0; j<res.size(); j++)
        res[i][j]=res[res.size()-1-i][j];
    }

    for(int i=0; i<res.size(); i++)
    {
        vector<string>temp=res[i];

        while(temp[temp.size()-1]==" ")temp.pop_back();

        res[i]=temp;
    }


    for(auto i:res)
    {
        for(int j=0; j<i.size(); j++)if(j!=i.size()-1)cout<<i[j]<<" ";
        else cout<<i[j];
        cout<<endl;
    }

    return;
    
}

int main() {
  // optimizing
  // ios::sync_with_stdio(false);
  // cin.tie(nullptr);
// #ifndef ONLINE_JUDGE
//   freopen_s("input.txt", "r", stdin);
//   freopen_s("output.txt", "w", stdout);
// #endif
  int t = 1;
//   cin>>t;
  while (t--) {
    solve();
    // break;
  }

  return 0;
}
