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
    ll tt;
    cin>>tt;
    while(tt--)
    {
        ll h,a;
        cin>>h>>a;
        int x=0;
        int ans=0;
        while(1>0)
        {
            if(h<=0 || a<=0)break;
            if(x%2==0)
            {
                h+=3;
                a+=2;
            }
            else{
                if(h>20  && h/a >=2)
                {
                    h-=20;
                    a+=5;

                }
                else{
                    h-=5;
                    a-=10;
                }
            }
            x++;

            ans++;
        }
        ans--;
        cout<<ans<<endl;
    }
}