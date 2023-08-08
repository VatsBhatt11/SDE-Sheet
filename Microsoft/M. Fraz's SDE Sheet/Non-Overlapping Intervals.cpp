class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        int ans=0;
        int prevend=intervals[0][1];
        for(int i=1;i<intervals.size();i++)
        {
            if(intervals[i][0]>=prevend)
                prevend=intervals[i][1];
            else
            {
                ans++;
                prevend=min(prevend,intervals[i][1]);
            }
        }
        return ans;
    }
};