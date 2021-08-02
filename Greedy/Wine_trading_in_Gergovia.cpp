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


int main()
{
    while(1>0)
    {
        ll n;
        cin>>n;
        if(n==0)break;
        vll v;
        ll s=0;
        for(int i=0;i<n;i++)
        {
            ll x;
            cin>>x;
            s+=x;
            v.pb(s);
        }
        ll ans=0;
        for(auto x:v)
        {
            ans+=(abs(x));
        }
        cout<<ans<<endl;
    }
}