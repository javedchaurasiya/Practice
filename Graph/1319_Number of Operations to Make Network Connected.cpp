class Solution {
public:
    void bfs(vector<int> &vis,int i,vector<int> v[],int n)
    {
        queue<int> q;
        q.push(i);
        vis[i]=1;
        while(!q.empty())
        {
            int x=q.front();
            q.pop();
            for(auto it : v[x])
            {
                if(vis[it]==0)
                {
                    vis[it]=1;
                    q.push(it);
                }
            }
        }
    }
    int makeConnected(int n, vector<vector<int>>& connections) {
        if(connections.size()<n-1)return -1;
        else
        {
            vector<int> v[n];
            for(int i=0;i<connections.size();i++)
            {
                v[connections[i][0]].push_back(connections[i][1]);
                v[connections[i][1]].push_back(connections[i][0]);
            }
            vector<int> vis(n,0);
            int ans=0;
            for(int i=0;i<n;i++)
            {
                if(vis[i]==0)
                {
                    ans++;
                    bfs(vis,i,v,n);
                }
                
            }
            return ans-1;
        }
    }
};