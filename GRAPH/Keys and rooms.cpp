class Solution {
public:
    void Traverse(int val,vector<vector<int>>& rooms,vector<int>&v)
    {
        if(v[val]==1)   return;
        v[val] = 1;
        for(int i=0;i<rooms[val].size();i++)
            Traverse(rooms[val][i],rooms,v);
    }
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n = rooms.size();
        vector<int>v(n);
        Traverse(0,rooms,v);
        for(auto i : v) 
            if(i==0)    return false;
        return true;
    }
};