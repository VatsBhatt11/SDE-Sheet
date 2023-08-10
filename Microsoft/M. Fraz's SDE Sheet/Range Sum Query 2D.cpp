class NumMatrix {
public:
    int r,c;
    vector<vector<int>>mSum;

    NumMatrix(vector<vector<int>>& matrix) {
        r=matrix.size(),c=matrix[0].size();
        mSum=vector<vector<int>>(r+1,vector<int>(c+1));
        for(int i=0;i<r;i++)
        {
            int presum=0;
            for(int j=0;j<c;j++)
            {
                presum+=matrix[i][j];
                int above=mSum[i][j+1];
                mSum[i+1][j+1]=presum+above;
            }
        }
    }

    int sumRegion(int row1, int col1, int row2, int col2)
    {
        row1++;
        col1++;
        row2++;
        col2++;
        int bottomr=mSum[row2][col2];
        int left=mSum[row2][col1-1];
        int above=mSum[row1-1][col2];
        int topl=mSum[row1-1][col1-1];
        return bottomr-left-above+topl;
    }
};