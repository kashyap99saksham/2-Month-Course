vector<int> longestCommonSubsequence(vector<int> a, vector<int> b) {
    vector<int>v;
    int n = a.size();
    int m = b.size();
    if(n==0 || m==0) return v;
    int T[n+1][m+1];
    for(int i=0;i<n+1;i++)
    {
        for(int j=0;j<m+1;j++)
        {
            if(i==0 || j==0)
                T[i][j] = 0;
        }
    }
    for(int i=1;i<n+1;i++)
    {
        for(int j=1;j<m+1;j++)
        {
            if(a[i-1] == b[j-1])
                T[i][j] = T[i-1][j-1]+1;
            else
                T[i][j] = max(T[i-1][j] , T[i][j-1]);
        }
    }
    int i=n,j=m;    
    while(i>0 && j>0)
    {
        if(a[i-1]==b[j-1]) { v.push_back(a[i-1]);  i--;    j--;   }
        else    {   (T[i-1][j] > T[i][j-1]) ? i-- : j--;     }
    }
    reverse(v.begin(),v.end());
    return v;
}
