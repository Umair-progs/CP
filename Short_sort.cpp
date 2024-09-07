#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        string in;
        cin>>in;
        int counter=0;
        if(in[0]!='a')counter++;
        if(in[1]!='b')counter++;
        if(in[2]!='c')counter++;
        
        if(counter==2 || counter==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
	return 0;
}