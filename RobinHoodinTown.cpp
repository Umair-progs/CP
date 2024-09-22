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
    vector<ll int>v(n);
    for(int i=0; i<n; i++)cin>>v[i];

    
    if(n<=2)
    {
        cout<<-1<<endl;
        return;
    }


    sort(v.begin(),v.end());
    ll int sums=accumulate(v.begin(),v.end(),0LL);

    ll int avgInd=n/2;

    ll int low=0,high=LLONG_MAX;
    ll int ans=LLONG_MAX;

    while(low<=high)
    {
        ll int x=low+(high-low)/2;
        if((sums+x)>(2*n*v[avgInd]))
        {
            ans=min(ans,x);
            high=x-1;
        }
        else low=x+1;
    }

    if(ans!=LLONG_MAX)cout<<ans<<endl;
    else cout<<-1<<endl;
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
  cin>>t;
  while (t--) {
    solve();
    // break;
  }

  return 0;
}
