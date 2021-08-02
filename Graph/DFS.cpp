class Solution 
{
    public:
	//Function to return a list containing the DFS traversal of the graph.
	void fun(vector<int> v[],vector<int> &a,vector<int> &ans,int x)
	{
	    ans.push_back(x);
	    for(auto i : v[x])
	    {
	        if(a[i]==0)
	        {
	            a[i]=1;
	            fun(v,a,ans,i);
	        }
	    }
	}
	vector<int>dfsOfGraph(int V, vector<int> adj[])
	{
	   // // Code here
	   // vector<int> a(V,0);
	   // a[0]=1;
	   // stack<int> st;
	   // st.push(0);
	   // vector<int> ans;
	   // while(!st.empty())
	   // {
	   //     int  x=st.top();
	   //     st.pop();
	   //     ans.push_back(x);
	   //     for(auto i : adj[x])
	   //     {
	   //         if(a[i]==0)
	   //         {
	   //             a[i]=1;
	   //             st.push(i);
	   //         }
	   //     }
	   // }
	   // return ans;
	   vector<int> ans;
	   vector<int> a(V,0);
	   a[0]=1;
	   fun(adj,a,ans,0);
	   return ans;
	}
};