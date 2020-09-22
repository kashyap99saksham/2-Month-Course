class Solution {
public:
    void MyFun(int r,int c,vector<vector<int>>& grid,int &para,int Trow,int Tcol)
    {
        if(r<0 || c<0 || r>=Trow || c>=Tcol || grid[r][c] == 0)
        {   para++; return;     }
        if(grid[r][c]==2)   return;
        grid[r][c] = 2;
        MyFun(r-1,c,grid,para,Trow,Tcol);
        MyFun(r+1,c,grid,para,Trow,Tcol);
        MyFun(r,c-1,grid,para,Trow,Tcol);
        MyFun(r,c+1,grid,para,Trow,Tcol);
    }
    int islandPerimeter(vector<vector<int>>& grid) {
        int row = grid.size();
        int col = grid[0].size();
        int para = 0;
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<grid[i].size();j++)
            {
                if(grid[i][j] == 1)
                    MyFun(i,j,grid,para,row,col);
            }
        }
        return para;
    }
};

// Faster Solution
int islandPerimeter(vector<vector<int>>& grid) {
        
        int res = 0;
        int r = grid.size();
        int c = grid[0].size();
        
        for(int i=0; i<r; i++)
        {
            for(int j=0; j<c; j++)
            {
                if(grid[i][j] == 1)
                {
                    res += (i == 0 || grid[i-1][j] == 0 ? 1 : 0);
                    res += (i == r-1 || grid[i+1][j] == 0 ? 1 : 0);
                    res += (j == 0 || grid[i][j-1] == 0 ? 1 : 0);
                    res += (j == c-1 || grid[i][j+1] == 0 ? 1 : 0);
                }
            }
        }
        
        return res;
    }