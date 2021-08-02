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


void heapify(vll &v,ll i,ll n)
{
    ll largest=i;
    ll left=(2*i) +1;
    ll right=(2*i) +2;

    if(left < n && v[left] > v[largest])
    {
        largest=left;
    }
    if(right<n && v[right]>v[largest])
    {
        largest=right;
    }
    if(largest!=i)
    {
        swap(v[i],v[largest]);
        heapify(v,largest,n);
    }
}
int main()
{
    ll n;
    cin>>n;
    vll v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    for(auto it: v)cout<<it<<" ";
    cout<<endl;
    ll x=(n/2)-1;
    for(int i=x;i>=0;i--)
    {
        heapify(v,i,n);
    }
    for(auto it: v)cout<<it<<" ";

}