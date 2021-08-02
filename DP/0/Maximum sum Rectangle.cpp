class Solution {
  public:
    int fun(vector<int> v)
    {
        int c=0;
        int sum=0;
        int upto=INT_MIN;
        for(auto x : v)
        {
            if(x>=0)c++;
            sum+=x;
            if(sum>upto)upto=sum;
            if(sum<0)sum=0;
        }
        if(c==0)return *(max_element(v.begin(),v.end()));
        else return upto;
    }
    int maximumSumRectangle(int r, int c, vector<vector<int>> m) {
        // code here
        int curr=INT_MIN;
        for(int i=0;i<r;i++)
        {
            vector<int> v(c,0);
            for(int j=i;j<r;j++)
            {
                for(int k=0;k<c;k++)
                {
                    v[k]+=m[j][k];
                }
                if(fun(v)>curr)curr=fun(v);
            }
        }
        return curr;
        
    }
};