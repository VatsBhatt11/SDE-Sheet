class Solution {
public:
    vector<int> sumZero(int n) {
        int x=n/2;
        vector<int>v;
        for(int i=x;i>0;i--)
        {
            v.push_back(i);
            v.push_back(-i);
        }
        if(n&1)
            v.push_back(0);
        return v;
    }
};