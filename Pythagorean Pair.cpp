#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define vi vector<long long int>
#define vll vector<long long>
#define vs  vector<string>
#define pii pair<int,int>
#define gcd __gcd
#define PI 3.1415926535897932384626433832795
#define inf INT_MAX
#define minf INT_MIN
#define lmax LLONG_MAX
#define  pb push_back
#define MP make_pair
#define lb lower_bound
#define ub upper_bound
#define w(t)  long long int t; cin>>t; while(t--)
#define all(x) x.begin(),x.end()
#define Big_Bang ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)

const int MOD = 1e9 + 7;
const int modd = 1e6 + 4;

void solve()
{
   ll int n,ct=0; cin>>n; 
   ll int p=0,q=sqrt(n);
   for(int i=0;i<=q;i++)
   {
    for(int j=0;j<=q;j++)
    {
        if((i*i)+(j*j)==n)
        {
            cout<<i<<" "<<j<<endl;
            ct++;
            break;
        }

    }
    if(ct==1)
    {
        break;
    }
   }
   if(ct<1)
   {
    cout<<-1<<endl;
   }
}
int main()
{
    ios::sync_with_stdio(false),cin.tie(nullptr);
    w(t)
   {
      solve();
   }
  return 0;
}