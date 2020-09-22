class Solution {
public:
    string reorganizeString(string S) {
        unordered_map<char,int>mp;
        for (int i = 0; i < S.size(); i++)
            mp[ S[i] ]++;
        priority_queue< pair<int,char>> pq;

        for(auto i : mp)
            pq.push(make_pair(i.second , i.first ));

        pair<int,char> a,b;

        string s;   
        while(pq.size() > 1){
            pair<int,char> a = pq.top();
            pq.pop();
            pair<int,char> b = pq.top();
            pq.pop();
            
            s += a.second;
            s += b.second;
            
            a.first--;
            b.first--;
            
            if(a.first > 0) pq.push(a);
            if(b.first > 0) pq.push(b);
        }
        if(pq.empty()){
            return s;
        }
        if(pq.top().first > 1) return "";
        else{
            s.push_back(pq.top().second);
        }
        return s;
        
    }
};
