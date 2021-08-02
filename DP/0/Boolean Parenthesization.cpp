class Solution{
public:
    int dp[202][202][2];
    int fun(string s,int i,int j,int flag)
    {
        // if(flag==0 && flag==1)continue;
        // cout<<flag<<" ";
        if(i>j)return 0;
        if(dp[i][j][flag]!=-1)return dp[i][j][flag];
        else
        {
            if(i==j)
        {
            if(flag==1)
            {
                if(s[i]=='T')return dp[i][j][flag]=1;
                else return dp[i][j][flag]= 0;
            }
            else
            {
                if(s[i]=='T')return dp[i][j][flag]=0;
                else return dp[i][j][flag]=1;
            }
        }
         int ans=0;
        for(int k=i+1;k<=j-1;k=k+2)
        {
            int lt=fun(s,i,k-1,1);
            int lf=fun(s,i,k-1,0);
            int rt=fun(s,k+1,j,1);
            int rf=fun(s,k+1,j,0);
            
            if(s[k]=='^')
            {
                if(flag==1)ans+=(lt*rf)+(rt*lf);
                else ans+=(lt*rt)+(rf*lf);
            }
            else if(s[k]=='&')
            {
                if(flag==1)ans+=(rt*lt);
                else ans+=(lf*rt)+(lt*rf)+(lf*rf);
            }
            else if(s[k]=='|')
            {
                if(flag==1)ans+=(lt*rf)+(lf*rt)+(rt*lt);
                else ans+=(lf*rf);
            }
        }
        return dp[i][j][flag]=ans;
        }
        
    }
    int countWays(int n, string s){
        // code here
        memset(dp,-1,sizeof(dp));
        int ans=fun(s,0,n-1,1);
        return ans;
    }
};