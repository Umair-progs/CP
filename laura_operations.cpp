#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout) ;
    #endif

    int t;
    cin>>t;

    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int x=0,y=0,z=0;
        //check if one element largest
        if((b+c)%2==0)x=1;
        if((a+b)%2==0)z=1;
        if((a+c)%2==0)y=1;

        cout<<x<<" "<<y<<" "<<z<<endl;
    }
// so basically the trick is if an array of only 1 or 2 or 3 is only possible if the other digit's parity is same doesnt matter the count

return 0;
}