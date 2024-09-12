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

    for(int i=0; i<n; i++)
    {
      v[i]=i+1;
    }

    vector<pair<int,int>>ans;

    for(int i=0; i<n-1; i++)
    {
      ans.push_back({v[v.size()-1],v[v.size()-2]});
      
      int temp=(v[v.size()-1]+v[v.size()-2]+1)/2;
      v.pop_back();
      v.pop_back();
      v.push_back(temp);
    }

    cout<<2<<endl;
    for(auto i:ans)
    {
      cout<<i.first<<" "<<i.second<<endl;
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
