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

    cout<<"lp"<<" "<<"hp"<<endl;

    for(ll i=2;i<=100;i++){
        cout<<lp[i]<<" "<<hp[i]<<endl;
    }
}
