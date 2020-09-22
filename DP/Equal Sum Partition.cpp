// If We get Total Sum is ODD  || Then Their cannot be any equal sum partition
// Now We use the approach in which we just check half sum subset is present or no if yes then their should be remaining sum subset present
// S1 == S2  
class Solution {
public:
    bool FindOneSubset(vector<int>& nums, int W)
    {
        int n = nums.size();
        bool T[n+1][W+1];
//         INITIALIZING
        for(int i=0;i<n+1;i++)
            for(int j=0;j<W+1;j++)
            {
                if(i==0)    T[i][j] = false;
                if(j==0)    T[i][j] = true;
            }
        for(int i=1;i<n+1;i++)
            for(int j=1;j<W+1;j++)
            {
                if(nums[i-1]<=j)  T[i][j] = T[i-1][j-nums[i-1]] || T[i-1][j];
                else
                    T[i][j] = T[i-1][j];
            }
        return T[n][W];
    }
    bool canPartition(vector<int>& nums) {
        int sum = 0;  
        for(int i=0;i<nums.size();i++)
            sum += nums[i];
        if(sum%2!=0)    return false;
        return FindOneSubset(nums, sum/2);
    }
};