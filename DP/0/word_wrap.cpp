class Solution {
public:
    int dp[1002][1002];
    int fun1(vector<int> v,int a,int b,int x)
    {
       if(a>b)return -1;
       else
       {
            int sum=b-a;
        for(int i=a;i<=b;i++)
        {
            sum+=v[i];
            if(sum>x)return -1;
        }
         if(b==v.size()-1)return 0;
         else return (int)pow(x-sum,2);
       }
    }
    int fun(vector<int> nums,int i,int j,int x)
    {
        if(i>j)return 0;
        // if(i==j)return (int)pow(x-nums[i],2);
        int ans=INT_MAX;
        if(dp[i][j]!=-1)return dp[i][j];
        else
        {
            for(int k=0;k<=j;k++)
        {
    
            int cost=fun1(nums,i,k,x);
            // cout<<cost<<"   ";
            // if(k==nums.size()-1)cost=0;
            if(cost!=-1)
            {
                int temp=cost;
                if(fun1(nums,k+1,j,x)==-1)temp+=fun(nums,k+1,j,x);
                // cout<<temp<<" ";
                ans=min(ans,temp);
            }
        }
        return dp[i][j]=ans;
        }
    }
    int solveWordWrap(vector<int>nums, int k) 
    { 
        // Code here
        int j=nums.size()-1;
        memset(dp,-1,sizeof(dp));
        int ans=fun(nums,0,j,k);
        return ans;
    } 
};