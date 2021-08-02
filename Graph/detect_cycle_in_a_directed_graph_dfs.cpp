class Solution
{
    public:
	//Function to detect cycle in a directed graph.
	bool check(int i,vector<int> l[],vector<int> &v,vector<int> &s)
	{
	    v[i]=1;
	    s[i]=1;
	    for(auto x : l[i])
	    {
	        if(v[x]!=1)
	        {
	            if(check(x,l,v,s))return true;
	        }
	        else if(s[x]==1)
	        {
	            return true;
	        }
	    }
	    s[i]=0;
	    return false;
	}
	bool isCyclic(int n, vector<int> adj[]) 
	{
	   	// code here
	   	vector<int> v(n,0);
	   	vector<int> s(n,0);
	   	for(int i=0;i<n;i++)
	   	{
	   	    if(v[i]!=1)
	   	    {
	   	        if(check(i,adj,v,s))return true;
	   	    }
	   	}
	   	return false;
	   	
	}
};