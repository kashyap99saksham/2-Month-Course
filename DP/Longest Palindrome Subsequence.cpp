  int LCS(string A,string B,int n,int m)
{
    int T[n+1][m+1];
    for(int i=0;i<n+1;i++)
        for(int j=0;j<m+1;j++)
            if(i==0||j==0)  T[i][j] = 0;
    for(int i=1;i<n+1;i++)
        for(int j=1;j<m+1;j++)
            if(A[i-1]==B[j-1])  T[i][j] = 1+T[i-1][j-1];
            else    T[i][j] = max(T[i][j-1] , T[i-1][j]);
    return T[n][m];

}
int Solution::solve(string A) {
    string B = A;
    reverse(B.begin(),B.end());
    return LCS(A,B,A.length(),B.length());
    return 0;
}
