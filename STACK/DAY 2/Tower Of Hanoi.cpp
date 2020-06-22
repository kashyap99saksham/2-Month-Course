#include <bits/stdc++.h>
using namespace std;
void findMove(int plates,int a,int b,int c,int move,int &count)
{
    if(plates > 0)
    {
        findMove(plates-1,a,c,b,move,count);
        count++;
        if(count==move)
            cout<<a<<" "<<c;
        findMove(plates-1,b,a,c,move,count);
    }
}
int main() 
{
	int t;  cin>>t;
	while(t--)
	{
	    int count = 0;
	    int plates,move;    
	    cin>>plates>>move;
	    findMove(plates,1,2,3,move,count);
	    cout<<endl;
	}
	return 0;
}