class Solution
{
	public:
	void fun(stack<int> &s,vector<int> &dis,vector<int> &low,vector<bool> &vis,int &ans,int u,vector<int> l[])
	{
	    static int ti=0;
	    dis[u]=ti;
	    low[u]=ti;
	    ti++;
	    s.push(u);
	    vis[u]=true;
	    for(auto v : l[u])
	    {
	        if(dis[v]==-1)
	        {
	            fun(s,dis,low,vis,ans,v,l);
	            low[u]=min(low[u],low[v]);
	        }
            //back_edge
	        else if(vis[v]==true)
	        {
	            low[u]=min(low[u],dis[v]);
	            
	        }
	    }
        //check for head
	    if(low[u]==dis[u])
	    {
	        ans++;
	        while(s.top()!=u)
	        {
	            int x=s.top();
	            s.pop();
	            vis[x]=false;
	        }
	        vis[s.top()]=false;
	        s.pop();
	    }
	}
	//Function to find number of strongly connected components in the graph.
	
    int tarjans(int v, vector<int> adj[])
    {
        //code here
        stack<int> s;
        vector<int> dis(v,-1),low(v,-1);
        vector<bool> vis(v,false);
        int ans=0;
        for(int i=0;i<v;i++)
        {
            if(dis[i]==-1)
            {
                fun(s,dis,low,vis,ans,i,adj);
            }
        }
        return ans;
        
    }
};