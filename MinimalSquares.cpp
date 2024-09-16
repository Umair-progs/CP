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
    
    int a,b;
    cin>>a>>b;

    int mini=min(a,b);
    int maxi=max(a,b);

    if(a==b)
    {
        cout<<4*a*b<<endl;
        return;
    }
    else if(2*mini<maxi)
    {
        cout<<maxi*maxi<<endl;
        return;
    }
    else{
        cout<<4*mini*mini<<endl;
        return;
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
  cin>>t;
  while (t--) {
    solve();
    // break;
  }

  return 0;
}
