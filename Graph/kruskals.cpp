#include<bits/stdc++.h>
// #include<ext/pb_ds/assoc_container.hpp> 
// #include<ext/pb_ds/tree_policy.hpp>
#define ll long long
#define ull unsigned long long
#define all(v) v.begin(),v.end()
#define fi first
#define se second
#define lb lower_bound
#define ub upper_bound
#define pb push_back
#define pob pop_back
#define vll vector<ll>
#define mll multiset<ll>
#define sll set<ll>
#define mpll map<ll,ll>
#define deb(x) cout<< #x <<":" <<" "<<x<<endl;
// #define pbdspair tree<pair<ll,ll>, null_type,less<pair<ll,ll>>, rb_tree_tag,tree_order_statistics_node_update>
// #define pbds tree<ll, null_type,less<ll>, rb_tree_tag,tree_order_statistics_node_update>
using namespace std;

void union_(vector<pair<int,int>> &ds,int x,int y)
{
    if(ds[x].se>ds[y].se)
    {
        ds[y].fi=x;
    }
    else if(ds[x].se<ds[y].se)
    {
        ds[x].fi=y;
    }
    else{
        ds[x].fi=y;
        ds[y].se++;
    }
}

int find_(vector<pair<int,int>> &ds,int a)
{
    if(ds[a].fi==-1)return a;
    else return ds[a].fi=find_(ds[a].fi);
}

bool check(vector<pair<int,int>> &ds,int a,int b)
{
    int x=find_(ds,a);
    int y=find_(ds,b);
    if(x==y)return false;
    else{
        union_(ds,x,y);
        return true;
    }
}

vector<pair<int,pair<int,int>>> kruskal(vector<pair<int,pair<int,int>>> &v,int n)
{
    sort(all(v));
    int count=0;
    vector<pair<int,int>> ds(n,{-1,0});
    vector<pair<int,pair<int,int>>> ans;
    for(int i=0;i<v.size();i++)
    {
        if(count==n-1)break;
        if(check(ds,v[i].se.fi,v[i].se.fi))
        {
            count++;
            ans.pb(v[i]);
        }

    }
    return ans;
}

int main()
{
    // ll tt;
    // cin>>tt;
    // while(tt--)
    // {
        
    // }
}