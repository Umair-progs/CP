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


//still quite didn't get that yet.
void solve() {
   int x,y,z;
   
   vector<int>a(3);

   cin>>a[0]>>a[1]>>a[2];

    sort(a.begin(),a.end());

    if(a[1]!=a[2])
    {
        cout<<"NO"<<endl;
        return;
    }
    else{
        cout<<"YES"<<endl<<a[0]<<" "<<a[0]<<" "<<a[2]<<endl;
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
