#include<bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

    int n;
    cin>>n;
    vector<float>ratings;
    while(n--)
    {
        float x;
        cin>>x;
        ratings.push_back(x);
    }

    bool flag=false;

    vector<int>res;

    for(int i=0; i<ratings.size(); i++)
    {
        if((int)ratings[i]%2==0)
        {
            res.push_back((int)ratings[i]/2);
        }
        else{
            if(flag==false)//take lower bound 
            {
                res.push_back((int)floor(ratings[i]/2));
                flag=true;
            }
            else{
                res.push_back((int)ceil(ratings[i]/2));
                flag=false;
            }
        }
    }

    for(auto i:res)
    {
        cout<<i<<endl;
    }

    return 0;



}