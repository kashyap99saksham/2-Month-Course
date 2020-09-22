bool ok(const vector<vector<int>>& grid, int i, int j){
            if(i < 0 || j < 0 || i >= grid.size() || j >= grid[0].size() || grid[i][j] != 1) return false;
            return true;
        }
        int orangesRotting(vector<vector<int>>& grid) {
            deque<pair<int,int>> que;
            for(int i=0;i<grid.size();++i){
                for(int j=0;j<grid[0].size();++j){
                    if(grid[i][j] == 2) que.push_back(make_pair(i,j));
                }
            }
            int depth = 0;
            while(!que.empty()){
                int n = que.size();
                for(int i=0;i<n;++i){
                    int curi = que[0].first, curj = que[0].second;
                    que.pop_front();
                    if(ok(grid,curi+1,curj)) grid[curi+1][curj] = 2,que.push_back(make_pair(curi+1,curj));
                    if(ok(grid,curi-1,curj)) grid[curi-1][curj] = 2,que.push_back(make_pair(curi-1,curj));
                    if(ok(grid,curi,curj+1)) grid[curi][curj+1] = 2,que.push_back(make_pair(curi,curj+1));
                    if(ok(grid,curi,curj-1)) grid[curi][curj-1] = 2,que.push_back(make_pair(curi,curj-1));
                }
                ++depth;
            }
            for(int i=0;i<grid.size();++i){
                for(int j=0;j<grid[0].size();++j){
                    if(grid[i][j] == 1) return -1;
                }
            }
            return depth == 0? 0:depth-1;
        }