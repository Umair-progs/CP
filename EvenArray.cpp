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
    vector<int>v(n);

    for(int i=0; i<n; i++)cin>>v[i];

    vector<int>odd,even;

    for(int i=0; i<v.size(); i++)
    {
        if(i%2!=v[i]%2)
        {
            if(i%2)odd.push_back(i);
            else even.push_back(i);
        }
    }

    if(odd.size()!=even.size())
    {
        cout<<-1<<endl;
        return;
    }

    cout<<odd.size()<<endl;
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
