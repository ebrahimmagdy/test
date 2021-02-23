#include <bits/stdc++.h>
#define ll long long

using namespace std;

int t;
ll x, y, k, need, ans;

int main(){
    cin>>t;
    while (t--)
    {
        cin>>x>>y>>k;
        ans = ((k * y + k - 1) + (x - 2))/(x - 1) + k;
        cout<<ans<<"\n";
    }
    
}