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

    if((n/2)%2)
    {
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;
    int last=2;
    for(int i=0; i<n/2; i++)
    {
        cout<<last<<" ";
        last+=2;
    }
    last-=2;

    int odds=1;
    for(int i=0; i<n/2; i++)
    {
        if(i==n/2-1)
        cout<<odds+n/2<<" ";
        else cout<<odds<<" ";
        odds+=2;
    }
    cout<<endl;

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
