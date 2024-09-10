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
    vector<int>v(2*n);

    for(int i=0; i<2*n; i++)cin>>v[i];
    sort(v.begin(),v.end());

    if(n==1)
    {
        cout<<abs(v[0]-v[1])<<endl;
        return;
    }

    cout<<abs(v[n-1]-v[n])<<endl;

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
