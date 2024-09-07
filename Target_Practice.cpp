#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    vector<vector<char>>board(10,vector<char>(10,'.'));
	    
	    for(int i=0; i<10; i++)
	    {
	        for(int j=0; j<10; j++)
	        {
	            cin>>board[i][j];
	        }
	    }
	    
	    
	    int points=0;
	    
	    for(int i=0; i<10; i++)
	    {
	        for(int j=0; j<10; j++)
	        {
	            if(board[i][j]=='X')
	            {
	       	       if((i==4&& j==4)||(i==4 && j==5)|| (i==5 && j==4)||(i==5 && j==5))points+=5;
	               else if((i==3 && j<7 && j>2) || (i==6 && j<7 && j>2)
	                   || (j==3 && i<7 && i>2) || (j==6 && i<7 &&i>2))points+=4;
	               else if((i==2 && j<8 && j>1) || (i==7 && j<8 && j>1)
	                   || (j==2 && i<8 && i>1) || (j==7 && i<8 &&i>1))points+=3;
	               else if((i==1 && j<9 && j>0) || (i==8 && j<9 && j>0)
	                   || (j==1 && i<9 && i>0) || (j==8 && i<9 &&i>0))points+=2;
	               else if(i==0 || i==9 || j==0 || j==9)points+=1;
	           
	            }
	        }
	    }
	    
	    cout<<points<<endl;
	    
	    
	}
	return 0;
}