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

//not understood it very well though
void solve() {
    int n;
    cin>>n;
    vector<int>v(7);
    int sum=0;
    for(int i=0; i<7; i++)
    {
        cin>>v[i];
        sum+=v[i];
    }

    if(sum==1)
    {
        for(int i=0; i<7; i++)
        {
            if(v[i]==1)
            {
                cout<<i+1<<endl;
                return;
            }
        }
    }
    else if(sum>=n)
    {
        int temp=0;
        for(int i=0; i<7; i++)
        {
            temp+=v[i];
            if(temp>=n)
            {
                cout<<i+1<<endl;
                return;
            }
        }
    }
    else{
        int diff=n%sum;
        if(diff==0)
        {
            for(int i=6; i>=0; i--)
            {
                if(v[i]!=0)
                {
                    cout<<i+1<<endl;
                    return;
                }

            }
        }
        int temp=0;
        for(int i=0; i<7; i++)
        {
            temp+=v[i];
            if(temp>=diff)
            {
                cout<<i+1<<endl;
                return;
            }
        }
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
