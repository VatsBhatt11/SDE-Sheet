class Solution {
public:
    int dist(vector<int>&p1,vector<int>&p2)
    {
        int x1=p1[0],y1=p1[1];
        int x2=p2[0],y2=p2[1];
        int d1=x1-x2,d2=y1-y2;
        return (d1*d1)+(d2*d2);
    }

    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {
        unordered_set<int>st;
        st.insert(dist(p1,p2));
        st.insert(dist(p1,p3));
        st.insert(dist(p1,p4));
        st.insert(dist(p2,p3));
        st.insert(dist(p2,p4));
        st.insert(dist(p3,p4));
        return (st.size()==2 && !st.count(0));
    }
};