#include<bits/stdc++.h>
using namespace std;

const int m=1e7+10;
vector<bool> isprime(m,true);

void sieve(int n)
{
   //isprime[0]=isprime[1]=false;

   for(int i=2;i*i<=n;i++){
    if(isprime[i]==true){
        for(int j=2*i;j<=n;j+=i){
            isprime[j]=false;
        }
    }
   }
   for(int i=2;i<=n;i++){
    if(isprime[i]==true){
        cout<<i<<endl;
    }
   }
}

int main()
{
    int n;
    cin>>n;

    sieve(n);
}
