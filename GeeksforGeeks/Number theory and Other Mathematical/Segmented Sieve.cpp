#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool prime[32001];
vector<int>primes;

void Sieve()  //Sieve of Eratosthenes
{
    memset(prime,true,sizeof prime);
    for( int i=3; i*i<=32000; i+=2)
    {
        if(prime[i])
        {
            for(int j=i*i; j<=32000; j+=i)
            {
                prime[j]=false;
            }
        }
    }
    primes.push_back(2);
    for( int i=3; i<=32000; i+=2)
    {
        if(prime[i])
        {
            primes.push_back(i);
        }
    }
    /*for(int i=0; i<10; i++)
    {
        cout<<primes[i]<<" ";
    }*/
}

void segSieve(ll l, ll r)  //Segmented Sieve
{
    bool isPrime[r-l+1];
    memset(isPrime,true,sizeof isPrime);

    for(int i=0; primes[i]*primes[i]<=r; i++)
    {
        int currentPrime = primes[i];
        ll base = (l/currentPrime)*currentPrime;
        if(base<l)
        {
            base += currentPrime;
        }
        for(int j=base; j<=r; j+=currentPrime)
        {
            isPrime[j-l]=false;
        }
        if(base == currentPrime)
        {
            isPrime[base-l]=true;
        }

    }
    if(l==1)
    {
        isPrime[0]=false;
    }
    for(int i=0; i<r-l+1; i++)
    {
        if(isPrime[i])
            cout<<i+l<<" ";
    }
    cout<<endl;
}

int main()
{
    int t;
    cin>>t;
    Sieve();
    while(t--)
    {
        ll r,l;
        cin>>l>>r;
        segSieve(l,r);
    }
    return 0;
}
