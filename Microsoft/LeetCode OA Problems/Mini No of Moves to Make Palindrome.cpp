class Solution {
public:
    int minMovesToMakePalindrome(string s) {
        int lt=0,n=s.size(),rt=n-1,ans=0;
        while(lt<rt)
        {
            int l=lt,r=rt;
            while(s[l]!=s[r])
                r--;
            if(l==r)
            {
                swap(s[r],s[r+1]);
                ans++;
                continue;
            }
            else
            {
                while(r<rt)
                {
                    swap(s[r],s[r+1]);
                    ans++;
                    r++;
                }
            }
            lt++;
            rt--;
        }
        return ans;
    }
};