class Solution {
public:
    string SCS(string s1,string s2,int n,int m){
        int T[n+1][m+1];
        for(int i=0;i<n+1;i++)
            for(int j=0;j<m+1;j++)
                if(i==0||j==0)
                    T[i][j]=0;
        for(int i=1;i<n+1;i++)
            for(int j=1;j<m+1;j++)
                if(s1[i-1]==s2[j-1])
                    T[i][j]=T[i-1][j-1]+1;
                else
                    T[i][j]=max(T[i][j-1],T[i-1][j]);
        string ans;
        int i=n,j=m;
        while(i>0&&j>0){
            if(s1[i-1]==s2[j-1])    {   ans.push_back(s1[i-1]);   i--;    j--;    }
            else
                if(T[i][j-1]>T[i-1][j]) {   ans.push_back(s2[j-1]); j--;    }
                else    {   ans.push_back(s1[i-1]); i--;    }
        }
        while(i > 0)    {   ans.push_back(s1[i-1]); i--;    }
        while(j > 0)    {   ans.push_back(s2[j-1]); j--;    }
        reverse(ans.begin(),ans.end());
        return ans;
    }
    string shortestCommonSupersequence(string s1, string s2) {
        return SCS(s1,s2,s1.length(),s2.length());
    }
};