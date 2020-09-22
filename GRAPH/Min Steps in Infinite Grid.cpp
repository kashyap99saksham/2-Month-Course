// Logic Behind the solution is very simple .
// just take maximum of (x1-x2) ans (y1-y2) between two points
int Solution::coverPoints(vector<int> &A, vector<int> &B) {
    int ans = 0;
    for(int i=0;i<A.size()-1;i++)
    {
        ans += max(abs(A[i] - A[i+1]) , abs(B[i] - B[i+1]) );
    }
    return ans;
}
