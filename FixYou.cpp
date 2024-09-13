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

void reachable(vector<vector<char>>&arr,vector<vector<int>>&vis, int i, int j, int& counter){
    
    queue<pair<int,int>>q;
    q.push({i,j});

    while(!q.empty())
    {
        int x=q.front().first;
        int y=q.front().second;
        q.pop();
        vis[x][y]=1;

        if(x==arr.size()-1 and y==arr[0].size()-1) return;

        if(arr[x][y]=='R')
        {
            if(y+1>=arr[0].size())
            {
                arr[x][y]='D';
                counter++;
                q.push({x+1,y});
                vis[x+1][y]=1;
            }
            else{
                q.push({x,y+1});
                vis[x][y+1]=1;
            }
        }
        else if(arr[x][y]=='D')
        {
            if(x+1>=arr.size())
            {
                arr[x][y]='R';
                counter++;
                q.push({x,y+1});
                vis[x][y+1]=1;
            }
            else{
                q.push({x+1,y});
                vis[x+1][y];
            }
        }

    }

    return;

}

void solve() {
    
    int n,m;
    cin>>n>>m;

    vector<vector<char>>arr(n,vector<char>(m,'a'));

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++) cin>>arr[i][j];
    }

    vector<vector<int>>vis(n,vector<int>(m,0));
    int counter=0;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(vis[i][j]==0)
            {
                reachable(arr,vis,i,j,counter);
            }
        }
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
  cin>>t;
  while (t--) {
    solve();
    // break;
  }

  return 0;
}
