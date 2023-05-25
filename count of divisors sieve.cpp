#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll const n=1e7+10;
vector<bool> isprime(n,true);
vector<ll> lp(n,0),hp(n,0);

int main()
{
    isprime[0]=false;
    for(ll i= 2;i*i<=n;i++){
        if(isprime[i]==true){
               lp[i]=hp[i]=i;
            for(ll j=i*2;j<=n;j+=i){
                isprime[j]=false;

                hp[j]=i;

                if(lp[j]==0){
                    lp[j]=i;
                }
            }
        }
    }

    ll x;

    cin>>x;

    map<ll, ll> m;

    while(x>1){
        ll prime_factor = lp[x];

        while(x%prime_factor==0){
            x/=prime_factor;
            m[prime_factor]++;
        }
    }

    ll cnt=1;

    for(auto it: m)
    {
        cnt*=(it.second+1);
    }

    cout<<cnt<<endl;
}


