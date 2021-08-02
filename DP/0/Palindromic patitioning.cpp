class Solution{
public:
    int dp[502][502];
    bool check(string st)
    {
        string s=st;
        reverse(st.begin(),st.end());
        if(s==st)return true;
        else return false;
    }
    int fun(string st,int i,int j)
    {
        if(i>j)return 0;
        if(i==j)return 1;
        int ans=INT_MAX;
        if(dp[i][j]!=-1)return dp[i][j];
        else
        {
            for(int k=1;k<=j-i+1;k++)
        {
            if(check(st.substr(i,k)))
            {
                int temp=1+fun(st,i+k,j);
                ans=min(ans,temp);
            }
        }
        return dp[i][j]=ans;
        }
        
    }
    int palindromicPartition(string str)
    {
        // code here
        memset(dp,-1,sizeof(dp));
        int j=str.length()-1;
        int ans=fun(str,0,j);
        return ans-1;
    }
};