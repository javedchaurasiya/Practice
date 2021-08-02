class Solution{
    public:
    bool safe(int r,int c,vector<vector<int>> &m,int n,vector<vector<int>> &vis)
    {
        if(r==-1 || r==n || c==-1 || c==n || m[r][c]==0 || vis[r][c]==1)return false;
        else return true;
    }
    void fun(int r,int c,vector<vector<int>> &m,int n,string &st,vector<string> &ans,vector<vector<int>> &vis)
    {
        if(!safe(r,c,m,n,vis))return;
        if(r==n-1 && c==n-1)
        {
            ans.push_back(st);
            return;
        }
        vis[r][c]=1;
        if(safe(r+1,c,m,n,vis))
        {
            st.push_back('D');
            fun(r+1,c,m,n,st,ans,vis);
            st.pop_back();
        }
        if(safe(r,c-1,m,n,vis))
        {
            st.push_back('L');
            fun(r,c-1,m,n,st,ans,vis);
            st.pop_back();
        }
        if(safe(r,c+1,m,n,vis))
        {
            st.push_back('R');
            fun(r,c+1,m,n,st,ans,vis);
            st.pop_back();
        }
        if(safe(r-1,c,m,n,vis))
        {
            st.push_back('U');
            fun(r-1,c,m,n,st,ans,vis);
            st.pop_back();
        }
        vis[r][c]=0;
        return;
    }
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        vector<string> ans;
        string st;
        vector<vector<int>> vis(n,vector<int>(n,0));
        fun(0,0,m,n,st,ans,vis);
        return ans;
    }
};