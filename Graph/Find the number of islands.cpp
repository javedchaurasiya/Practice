class Solution
{
    public:
    bool valid(int a,int b,vector<vector<char>>& g,vector<vector<int>>& v)
    {
         int n=g.size();
        int m=g[0].size();
        if(a>=0 && a<n && b>=0 && b<m && g[a][b]=='1' && v[a][b]==0)return true;
        else return false;
    }
    void bfs(vector<vector<char>>& g,int a,int b,vector<vector<int>>& v)
    {
        int n=g.size();
        int m=g[0].size();
        v[a][b]=1;
        queue<pair<int,int>> q;
        q.push({a,b});
        vector<int> dx={1,1,1,-1,-1,-1,0,0};
        vector<int> dy={1,-1,0,1,-1,0,1,-1};
        while(!q.empty())
        {
            pair<int,int> p=q.front();
            q.pop();
            for(int i=0;i<8;i++)
            {
                int x1=p.first+dx[i];
                int y1=p.second+dy[i];
                if(valid(x1,y1,g,v))
                {
                    v[x1][y1]=1;
                    q.push({x1,y1});
                }
            }
        }
    }
    //Function to find the number of islands.
    int numIslands(vector<vector<char>>& grid) 
    {
        // Code here
        int ans=0;
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>> v(n,vector<int>(m,0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]=='0')continue;
                else if(v[i][j]==0)
                {
                    ans++;
                    bfs(grid,i,j,v);
                }
            }
        }
        return ans;
    }
};