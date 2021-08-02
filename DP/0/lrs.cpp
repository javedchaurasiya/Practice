class Solution {
	public:
// 	int dp[1003][1003];
// 	    int fun(string a,string b,int x,int y)
// 	    {
// 	        if(x==0 || y==0)return 0;
// 	        if(dp[x][y]!=-1)return dp[x][y];
// 	        else
// 	        {
// 	            if(x!=y)
// 	        {
// 	            if(a[x-1]==b[y-1])return dp[x][y]= 1+fun(a,b,x-1,y-1);
// 	            else
// 	            {
// 	                return dp[x][y]= max(fun(a,b,x-1,y),fun(a,b,x,y-1));
// 	            }
// 	        }
// 	        else
// 	        {
// 	            return dp[x][y]= max(fun(a,b,x-1,y),fun(a,b,x,y-1));
// 	        }
// 	        }
// 	    }
        int fun(string a,string b,int x,int y)
        {
            int dp[x+1][y+1];
            memset(dp,0,sizeof(dp));
            for(int i=1;i<=x;i++)
            {
                for(int j=1;j<=y;j++)
                {
                    if(i!=j)
                    {
                        if(a[i-1]==b[j-1])dp[i][j]=1+dp[i-1][j-1];
                        else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                    }
                    else
                    {
                        dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                    }
                }
            }
            return dp[x][y];
        }
		int LongestRepeatingSubsequence(string str){
		    // Code here
		    //memset(dp,-1,sizeof(dp));
		    int ans=fun(str,str,str.length(),str.length());
		    return ans;
		}

};