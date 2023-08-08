class Solution {
public:
    string longestPalindrome(string s) {
       string ans="";
       int l,r,len=0,n=s.size();
       for(int i=0;i<n;i++)
       {
           l=i,r=i;
           while(l>=0 && r<n && s[l]==s[r])
           {
               if(r-l+1>len)
               {
                   len=r-l+1;
                   ans=s.substr(l,r-l+1);
               }
               l--;
               r++;
           }
           l=i,r=i+1;
           while(l>=0 && r<n && s[l]==s[r])
           {
               if(r-l+1>len)
               {
                   len=r-l+1;
                   ans=s.substr(l,r-l+1);
               }
               l--;
               r++;
           }
       }
       return ans;
    }
};