class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        int n=words.size();
        for(int i=0;i<n-1;i++)
        {
            string s1=words[i],s2=words[i+1];
            int ind=0;
            while(s1[ind]==s2[ind])
                ind++;
            int l=order.find(s1[ind]),r=order.find(s2[ind]);
            if(l>r)
                return false;
        }
        return true;
    }
};