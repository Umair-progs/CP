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
    
    int a,b,c,n;
    cin>>a>>b>>c>>n;

    int maxi=max(a,max(b,c));

    int diff=maxi-a+maxi-b+maxi-c;
    n-=diff;
    if(n<0)
    {
        cout<<"NO"<<endl;
        return;
    }
    if(n%3==0)
    {
        cout<<"YES"<<endl;
        return;
    }
    cout<<"NO"<<endl;
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
