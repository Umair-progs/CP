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
    
    int n,m;
    cin>>n>>m;
    int counter=0;
    if(m%n!=0)
    {
        cout<<-1<<endl;
        return;
    }

    int d=m/n;

    while(d%3==0)
    {
        counter++;
        d/=3;
    }

    while(d%2==0)
    {
        counter++;
        d/=2;
    }

    if(d!=1)
    {
        cout<<-1<<endl;
        return;
    }

    cout<<counter<<endl;

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
