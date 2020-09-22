// Given an array of integers, find out whether there are two distinct indices i and j in the array such that
//  the absolute difference between nums[i] and nums[j] is at most t 
// and the absolute difference between i and j is at most k.
// Input: nums = [1,2,3,1], k = 3, t = 0
// Output: true    
// Input: nums = [1,5,9,1,5,9], k = 2, t = 3
// Output: false
class Solution {
public:
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int k, int t) {
        vector<pair<int,int>>v;
        for(int i=0;i<nums.size();i++)  v.push_back( {  nums[i] , i} );
        sort(v.begin(),v.end());
        // for(auto i:v)   cout<<i.first<<" "<<i.second<<endl;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if(v[j].first > [i].first) + t)
                    break;
                if(abs(v[i].second - v[j].second) <= k) return true;
            }
        }
        return false;
    }
};