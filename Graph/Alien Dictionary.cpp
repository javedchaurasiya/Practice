class Solution{
    public:
    void fun(int x,stack<int> &s,vector<int> &vis,int k,vector<int> l[])
    {
        vis[x]=1;
        for(auto i : l[x])
        {
            if(vis[i]==0)
            {
                fun(i,s,vis,k,l);
            }
        }
        s.push(x);
    }
    string findOrder(string dict[], int n, int k) {
        //code here
        vector<int> v[k];
        
        for(int i=0;i<n-1;i++)
        {
            for(int j=0;j<min(dict[i].length(),dict[i+1].length());j++)
            {
                if(dict[i][j]!=dict[i+1][j])
                {
                    v[dict[i][j]-'a'].push_back(dict[i+1][j]-'a');
                    break;
                }
            }
        }
        stack<int> s;
        vector<int> vis(k,0);
        for(int i=0;i<k;i++)
        {
            if(vis[i]==0)
            {
                fun(i,s,vis,k,v);
            }
        }
        string ans="";
        while(!s.empty())
        {
            ans.push_back(s.top()+'a');
            s.pop();
        }
        return ans;
    }
};