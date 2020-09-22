class Solution {
public:
    bool isMatch(string s, string p) {
        int n = s.length(), m = p.length();
        bool T[n+1][m+1];
        for(int i=0;i<n+1;i++)
            for(int j=0;j<m+1;j++)
            {
                if(j==0)    T[i][j]=false;
               if(i==0&&j==0)   {  T[i][j]=true; continue;  }
                if(i==0)    {   if(p[j-1]=='*') T[i][j] = T[i][j-1];    else T[i][j] = false;   }
            }
        for(int i=1;i<n+1;i++)
            for(int j=1;j<m+1;j++)
            {
                if(s[i-1]==p[j-1] || p[j-1]=='?')  T[i][j] = T[i-1][j-1];
                else    if(p[j-1]=='*') T[i][j] = (T[i-1][j] || T[i][j-1]);
                else T[i][j] = false;
            }
        return T[n][m];
    }
};