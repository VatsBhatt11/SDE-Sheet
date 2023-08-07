class Solution {
public:
    string removeKdigits(string num, int k) {
        int n=num.size();
        stack<char>st;
        for(auto ch:num)
        {
            while(!st.empty() && k && st.top()>ch)
            {
                st.pop();
                k--;
            }
            if(ch!='0' || !st.empty())
                st.push(ch);
        }
        if(st.empty())
            return "0";
        while(!st.empty() && k--)
            st.pop();
        while(!st.empty())
        {
            num[n-1]=st.top();
            st.pop();
            n--;
        }
        if(num.substr(n)=="")
            return "0";
        return num.substr(n);
    }
};