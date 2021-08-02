pair<int,int> findSmallestRange(int arr[][N], int n, int k)
{
      //code here
      priority_queue<pair<int,pair<int,int>> p;
      int ma=arr[0][0];
      int range=INT_MAX;
      int mi=INT_MAX;
      int ans1,ans2;
      for(int i=0;i<k;i++)
      {
          p.push({-1*(arr[i][0],{i,0})});
          ma=max(ma,arr[i][0]);
      }
      while(1>0)
      {
          pair<int,pair<int,int>> x=p.top();
          p.pop();
          int a=-1*(x.first);
          int b=x.second.first;
          int c=x.second.second;
          mi=a;
          if(range>ma-mi+1)
          {
              range=ma-mi+1;
              ans1=mi;
              ans2=ma;
              
          }
          if(c!=n-1)
          {
              p.push({-1*(arr[b][c+1],{b,c+1})});
          }
          else break;
      }
      return {ans1,ans2};
}