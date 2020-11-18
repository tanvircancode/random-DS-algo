#include<bits/stdc++.h>
using namespace std;
vector<int>primes;

void chkPrime()
{
    for(int i = 2; i <= 100; i++)
    {
        bool chk = false;
        for(int j = 2; j*j <= i; j++)
        {
            if(i%j == 0)
            {
                chk = true;
                break;
            }
        }
        if(chk == false)
            primes.push_back(i);
    }
}
int main()
{
    int n,t,divisor,cnt;
    cin>>t;
    chkPrime();
    /* for(int i=0; i<primes.size(); i++)
          {
              cout<<primes[i]<<endl;
          } */
    while(t--)
    {
        cin>>n;
        divisor=1;
        for(int i=0; i < primes.size(); i++)
        {
            if(n % primes[i] == 0)
            {
                cnt=1;
                while(n % primes[i] == 0)
                {
                    //cout<<n/primes[i]<<endl;
                    n /= primes[i];
                    cnt++;
                }
                divisor*=cnt;
            }
        }
        cout<<divisor<<endl;
    }

}

