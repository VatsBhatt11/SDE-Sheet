class Solution {
public:
    int myAtoi(string s) {
        int i=0,n=s.size();
        while(s[i]==' ')
            i++;
        int pos=0,neg=0;
        double ans=0;
        if(s[i]=='-')
            neg++,i++;
        if(s[i]=='+')
            pos++,i++;
        while(i<n && s[i]>='0' && s[i]<='9')
        {
            ans=(ans*10)+(s[i]-'0');
            i++;
        }
        if(neg)
            ans=-ans;
        if(neg && pos)
            return 0;
        if(ans>INT_MAX)
            return INT_MAX;
        else if(ans<INT_MIN)
            return INT_MIN;
        return (int)ans;
    }
};