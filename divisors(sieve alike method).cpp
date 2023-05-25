#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll const n=1e5;
vector<ll> divisors[n];

int main()
{
    for(ll i= 1;i<=n;i++){
        for(ll j=i;j<=n;j+=i){
            divisors[j].push_back(i);
        }
    }

    for(ll i=1;i<=100;i++){

        for(ll div: divisors[i]){
            cout<<div<<" ";
        }
        cout<<endl;

    }
}


