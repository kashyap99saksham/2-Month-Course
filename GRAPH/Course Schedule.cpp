typedef vector<vector<int>> vii;
    typedef vector<int> vi;
    bool cycle(vii & p, vi & v,int i)
    {
       if(v[i] == 1) return true; 
       if(v[i] == 2) return false; 
       v[i] = 1; 
       for(int x: p[i])
          if(cycle(p,v,x)) return true; 
       v[i] = 2;
       return false; 
    }
    bool canFinish(int n, vii & p) {
      vii adjList(n);
      vi v(n,0); 
        for(auto i : p)
            adjList[i[1]].push_back(i[0]);  // [ 1,2 ] It means 2 -> 1
        for(int i = 0 ; i < n;i++)
            if(cycle(adjList,v,i)) return false; 
        return true;
    }