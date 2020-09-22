class Solution {
public:
    void Traverse(int val,vector<vector<int>> &M,vector<int> &v)
    {
        if(v[val]==1)   return;
        v[val] = 1;
        for(int i=0;i<M[val].size();i++)
        {
            if(val != i && M[val][i] == 1)
                Traverse(i,M,v);
        }
    }
    int findCircleNum(vector<vector<int>>& M) {
        int n = M.size();
        vector <int> v(n);
        int ans = 0;
        for(int i=0;i<M.size();i++)
        {
            if(v[i]==0)
            {
                Traverse(i,M,v);
                ans++;
            }
        }
        return ans;
    }
};