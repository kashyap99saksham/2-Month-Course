// same as subset sum problem just need to ADD
int Solution::solve(vector<int> &A, int B) {
    bool T[A.size()+1][B+1];
    for(int i=0;i<A.size()+1;i++)
    {
        for(int j=0;j<B+1;j++)
        {
            if(i==0)
                T[i][j] = false;
            if(j==0)
                T[i][j]= true;
        }
    }
    for(int i=1;i<A.size()+1;i++)
    {
        for(int j=1;j<B+1;j++)
        {
            if(A[i-1]<=j)
            {
                T[i][j] = T[i-1][j-A[i-1]] + T[i-1][j];
            }
            else
                T[i][j] = T[i-1][j];
        }
    }
    return T[A.size()][B];
}
