class Solution {
public:
    int minDeletions(string s) {
        vector<int>v(26);
        for(auto it:s)
            v[it-'a']++;
        sort(v.rbegin(),v.rend());
        int f=v[0],ans=0;
        for(auto it:v)
        {
            if(it>f)
            {
                if(f>0)
                {
                    ans+=(it-f);
                }
                else
                    ans+=it;
            }
            f=min(f-1,it-1);
        }
        return ans;
    }
};