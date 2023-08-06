class Solution {
public:
    int strStr(string haystack, string needle) {
        int n=haystack.size(),m=needle.size(),l=n-m+1;
        for(int i=0;i<l;i++)
        {
            if(haystack.substr(i,m)==needle)
                return i;
        }
        return -1;
    }
};