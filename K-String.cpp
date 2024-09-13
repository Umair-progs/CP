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
    int k;
    cin>>k;
    string s;
    cin>>s;
    
    map<char,int>m;
    for(auto c:s)
    {
        m[c]++;
    }

    for(auto i:m)
    {
        if(i.second%k!=0) 
        {
            cout<<-1<<endl;
            return;
        }
    }

    vector<string>v(k,"");

    for(auto i:m)
    {
        int size=i.second/k;
        for(int j=0; j<k; j++)
        {
            v[j]+=string(size,i.first);
        }
    }

    string ans="";


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
