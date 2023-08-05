class Solution {
public:
    int maxi(string s)
    {
        vector<int>v(26);
        for(auto it:s)
        {
            v[it-'a']++;
            if(v[it-'a']>1)
                return -1;
        }
        return s.size();
    }

    void helper(int ind,string s,vector<string>&arr,int &ans)
    {
        if(ind==arr.size()){
            ans=max(ans,maxi(s));
            return;
        }
        helper(ind+1,s,arr,ans);
        helper(ind+1,s+arr[ind],arr,ans);
    }

    int maxLength(vector<string>& arr) {
        string s="";
        int ans=0;
        helper(0,s,arr,ans);
        return ans;
    }
};