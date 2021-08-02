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


void fun(int a,int b,int c)
{
    map<pair<int,int>,pair<int,int>> ans;
    map<pair<int,int>,int> v;
    queue<pair<int,int>> q;
    q.push({0,0});
    v[{0,0}]=1;
    while(!q.empty())
    {
        pair<int,int> p=q.front();
        q.pop();
        if(p.fi>a || p.se>b || p.fi<0 || p.se<0)continue;
        if(p.fi==c || p.se==c)
        {
            //check for condition and then print path using ans map(parent map)
        }
        if(v[{a,p.se}]!=1)
        {
            v[{a,p.se}]=1;
            ans[{a,p.se}]=p;
            q.push({a,p.se});

        }
        if(v[{p.fi,b}]!=1)
        {
            v[{p.fi,b}]=1;
            ans[{p.fi,b}]=p;
            q.push({p.fi,b});
        }
        // similarily write all the comditions
    }
}


int main()
{
    ll tt;
    cin>>tt;
    while(tt--)
    {
        
    }
}