class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>>ans;
        for(int i=0;i<(1<<n);i++)
        {
            vector<int>v;
            for(int bits=0;bits<n;bits++)
            {
                if(1&(i>>bits))
                    v.push_back(nums[bits]);
            }
            ans.push_back(v);
        }
        return ans;
    }
};