class Solution
{
public:
    int countFriendsPairings(int n) 
    { 
        // code hereint
        int ans[n+1];
        int m=1000000000+7;
        ans[0]=0;
        ans[1]=1;
        ans[2]=2;
        for(int i=3;i<=n;i++)
        {
            ans[i]=((ans[i-1]%m)+(((i-1)*ans[i-2])%m))%m;
        }
        return ans[n]%m;
    }
}; 