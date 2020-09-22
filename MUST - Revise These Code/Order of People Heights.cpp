// https://www.youtube.com/watch?v=40H5vRK_H2E&feature=youtu.be
bool sortinrev(const pair<int,int> &a, const pair<int,int> &b) 
       return (a.first > b.first); 
vector<int> Solution::order(vector<int> &A, vector<int> &B) {
    vector<pair<int,int>>v;
    for(int i=0;i<A.size();i++) v.push_back( { A[i],B[i] } );
    sort(v.begin(), v.end(), sortinrev); 
    vector<int>ans;
    for(auto i : v) 
        ans.insert(ans.begin()+i.second , i.first);
    return ans;
}
