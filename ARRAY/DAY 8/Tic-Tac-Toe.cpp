#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)

int win(char board[3][3],char c)
{
	bool w1=board[0][0]==c && board[0][1]==c && board[0][2]==c;
	bool w2=board[1][0]==c && board[1][1]==c && board[1][2]==c;
	bool w3=board[2][0]==c && board[2][1]==c && board[2][2]==c;
	bool w4=board[0][0]==c && board[1][0]==c && board[2][0]==c;
	bool w5=board[0][1]==c && board[1][1]==c && board[2][1]==c;
	bool w6=board[0][2]==c && board[1][2]==c && board[2][2]==c;
	bool w7=board[0][0]==c && board[1][1]==c && board[2][2]==c;
	bool w8=board[2][0]==c && board[1][1]==c && board[0][2]==c;
	return w1||w2||w3||w4||w5||w6||w7||w8;
}

int main()
{
	fast;
	int t,x_count,o_count;
	cin>>t;
	char board[3][3];
	for(int i=0;i<t;i++)
	{
		x_count=o_count=0;
		for(int i1=0;i1<3;i1++)
		{
			for(int i2=0;i2<3;i2++)
			{
				cin>>board[i1][i2];
				(board[i1][i2]=='X')?x_count++:o_count++;
			}
		}
		cout<<((x_count - o_count == 1 && !win(board,'O'))? "Valid" : "Invalid") <<endl;
	}
	return 0;
}