class Solution
{
	public:
	void dfs(int i,stack<int> &s,vector<int> &v,vector<int> l[])
	{
	    v[i]=1;
	    for(auto x : l[i])
	    {
	        if(v[x]==0)dfs(x,s,v,l);
	    }
	    s.push(i);
	}
	//Function to return list containing vertices in Topological order. 
	vector<int> topoSort(int n, vector<int> adj[]) 
	{
	    // code here
	    stack<int> s;
	    vector<int> ans;
	    vector<int> v(n,0);
	    for(int i=0;i<n;i++)
	    {
	        if(v[i]==0)
	        {
	            dfs(i,s,v,adj);
	        }
	    }
	    while(!s.empty())
	    {
	        ans.push_back(s.top());
	        s.pop();
	    }
	    return ans;
	}
};