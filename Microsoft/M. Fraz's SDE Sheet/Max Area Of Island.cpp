class Solution {
public:
    int dfs(int r,int c,vector<vector<int>>& visited,
    vector<vector<int>>& grid)
    {
        if(r<0 || r==grid.size() || c<0 || c==grid[0].size() 
        || visited[r][c] || grid[r][c]==0)
            return 0;
        visited[r][c]=1;
        return 1+dfs(r+1,c,visited,grid)+dfs(r,c+1,visited,grid)+
        dfs(r,c-1,visited,grid)+dfs(r-1,c,visited,grid);
    }

    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int r=grid.size(),c=grid[0].size();
        vector<vector<int>>visited(r,vector<int>(c));
        int ans=0;
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(!visited[i][j] && grid[i][j]==1)
                    ans=max(ans,dfs(i,j,visited,grid));
            }
        }
        return ans;
    }
};