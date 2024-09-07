include<bits/stdc++.h>
#define lli long long int
using namespace std;

bool check(int n,vector<int>count,vector<int>res, int r, vector<int>costs)
{
    bool flag=true;
    int burgers=0;

    while(r>=0)
    { 
        {
            res[0]=-count[0];
        }
        else{
            int temp=count[0]-res[0];
            temp=temp*costs[0];
            if(temp>r) return burgers==n;
        }
        if(res[1]>count[1]){
            res[1]-=count[1];
        }
        else{
            int temp=count[1]-res[1];
            temp=temp*costs[1];
            if(temp>r) return burgers==n;
        }
        if(res[2]>count[2])
        {
            res[2]-=count[2];
        }
        else{
            int temp=count[2]-res[2];
            temp=temp*costs[2];
            if(temp>r)return burgers==n;
        }
        burgers++;
    }

    return burgers==n;
}

int totalBurgers(vector<int>counts,vector<int>resources)
{
    int ans=INT_MAX;
    int b=resources[0]/counts[0];
    int s=resources[1]/counts[1];
    int c=resources[2]/counts[2];
    ans=min(c,min(b,s));
    return ans;

}
int main(){
    #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

    string recipe;
    cin>>recipe;
    int nb,ns,nc,pb,ps,pc;
    cin>>nb>>ns>>nc>>pb>>ps>>pc;
    lli r;
    cin>>r;

    int recipeCost;
    int bcount=0,scount=0,ccount=0;
    for(int i=0;i<recipe.size(); i++)
    {
        if(recipe[i]=='B')bcount++;
        if(recipe[i]=='S')scount++;
        if(recipe[i]=='C')ccount++;
    }

    recipeCost=bcount*pb+scount*ps+ccount*pc;
    int ans=0;
    vector<int>count{bcount,scount,ccount};
    vector<int>res{nb,ns,nc};
    vector<int>costs{pb,ps,pc};
    int lower=totalBurgers(count,res);
    int upper=totalBurgers(count,{(lli)nb+r/pb,(lli)ns+r/ps,(lli)nc+r/pc});
    int result=0;
    while(lower<=upper)
    {
        int mid=lower+(upper-lower)/2;
        if(check(mid,count,res,r,costs))
        {
            result=mid;
            lower=mid+1;
        }
        else{
            upper=mid-1;
        }
    }

    cout<<result<<endl;
    return 0;
}



