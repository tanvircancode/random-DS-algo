#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b);


int gcd (int a,int b)
{
    //using recursion
    if(b==0)
    {
        return a;
    }
    else
    {
        return gcd(b,a%b);
    }
        /*while(true)
        {
            int remainder = a%b;
            if(remainder == 0)
            {
                return b;
            }
            a = b;
            b = remainder;
            cout<<"a : "<<a<<" b : "<<b<<endl;
        }*/
}

int lcm(int a,int b)
{
      return (a / gcd(a,b)) * b;
      //another way is given below
     /* for(int i=1;;i++)
      {
          if(i%a==0 && i%b==0)
            return i;
      }*/

}


int main()
{
    int tc,i,a,b,ans;
    cin>>tc;
    while(tc--)
    {
        cin>>a>>b;
        cout<<gcd(a,b)<<endl;
        cout<<lcm(a,b)<<endl;

    }
    return 0;
}

//Below is a way
/*while(tc--)
     {
         cin>>a>>b;
         for(int i=1; i<= min(a,b); i++)
         {
             if(a%i==0 && b%i==0)
             {
                 ans=i;
             }
         }
         cout<<"GCD is : "<<ans<<endl;
     }
     return 0;*/
