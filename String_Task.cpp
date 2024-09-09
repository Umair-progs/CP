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
    string s;
    cin>>s;
    map<char,int>m;
    m.insert({'a',1});
    m.insert({'e',1});
    m.insert({'i',1});
    m.insert({'o',1});
    m.insert({'u',1});
    m.insert({'y',1});
    string res="";

    for(int i=0; i<s.size(); i++)
    {
        if(m[tolower(s[i])]>0)
        {
            continue;
        }
        else{
            char c=tolower(s[i]);
            res=res+'.'+c;
        }
    }

    cout<<res<<endl;

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
