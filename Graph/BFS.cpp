class Solution
{
    public:
    //Function to return Breadth First Traversal of given graph.
	vector<int>bfsOfGraph(int V, vector<int> adj[])
	{
	    // Code here
	    vector<int> a(V,0);
	    queue<int> q;
	    q.push(0);
	    vector<int> ans;
	    while(!q.empty())
	    {
	        int x=q.front();
	        if(a[x]==0)ans.push_back(x);
	        q.pop();
	        a[x]=1;
	        for(auto i: adj[x])
	        {
	            if(a[i]==0)q.push(i);
	        }
	    }
	    return ans;
	}
};