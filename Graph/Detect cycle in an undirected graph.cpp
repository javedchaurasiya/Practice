class Solution 
{
    public:
    //Function to detect cycle in an undirected graph.
    bool check(int i,int p,vector<int> &v,vector<int> l[])
    {
        v[i]=1;
        for(auto x : l[i])
        {
            if(x==p)continue;
            else
            {
                if(v[x]==1)return true;
                else
                {
                    if(check(x,i,v,l))return true;
                }
            }
        }
        return false;
    }
	bool isCycle(int n, vector<int>adj[])
	{
	    // Code here
	    vector<int> v(n,0);
	    for(int i=0;i<n;i++)
	    {
	        if(v[i]==0)
	        {
	            if(check(i,-1,v,adj))return true;
	        }
	    }
	    return false;
	}
};