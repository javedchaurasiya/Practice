class Solution {
public:
	int isNegativeWeightCycle(int n, vector<vector<int>>edges){
	    // Code here
	    vector<long long> v(n,INT_MAX);
	    v[0]=0;
	    for(int i=0;i<n-1;i++)
	    {
	        for(int j=0;j<edges.size();j++)
	        {
	            int a=edges[j][0];
	            int b=edges[j][1];
	            int c=edges[j][2];
	            if(v[b]>v[a]+c)
	            {
	                v[b]=v[a]+c;
	            }
	        }
	    }
	    for(int j=0;j<edges.size();j++)
	        {
	            int a=edges[j][0];
	            int b=edges[j][1];
	            int c=edges[j][2];
	            if(v[b]>v[a]+c)
	            {
	                return true;
	            }
	        }
	    
	    return false;
	}
};