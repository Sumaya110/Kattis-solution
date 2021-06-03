#include<bits/stdc++.h>
using namespace std;
#define ll          long long
#define ld          long double

#define si(a)       scanf("%d",&a)
#define si2(a,b)    scanf("%d%d",&a,&b)
#define si3(a,b,c)  scanf("%d%d%d",&a,&b,&c)
#define sl(a)       scanf("%lld",&a)
#define sl2(a,b)    scanf("%lld%lld",&a,&b)
#define sl3(a,b, c)    scanf("%lld%lld%lld",&a,&b,&c)

#define pfi(a)      printf("%d", a)
#define pfl(a)      printf("%lld", a)
#define pf(a)       printf("a")
#define el          printf("\n");
#define YES         printf("YES\n")
#define NO          printf("NO\n")
#define Yes         printf("Yes\n")
#define No          printf("No\n")
#define yes         printf("yes\n")
#define no          printf("no\n")
#define space       printf(" ")
#define loop(i,a,b) for(int i=a; i<=b; i++)
#define pll         pair<ll,ll>
#define pii         pair<int, int>

#define sq(a)       (a)*(a)

#define pb          push_back
#define mk          make_pair
#define sz          size()
#define ff          first
#define ss          second
#define mem(a,val)  memset(a, val, sizeof(a))
#define all(v)      v.begin(), v.end()

#define md          1000000007
#define pi          acos(-1.0)
#define inf         1000000000000

#define p(a, b, e)  for(int i=b; i<=e; i++) printf("%lld ", a[i]);
#define csh         printf("Case #%d: ", ++cs)
#define csc         printf("Case %d: ", ++cs)


#define fast1 ios::sync_with_stdio(false);
#define fast2 cin.tie(nullptr);

string s,q;
char c;

ll parent[1000005];
ll Find(ll u)
{
    if (u == parent[u])
        return u;
    return parent[u] = Find(parent[u]);
}

void Union(ll u, ll v)
{
    ll p = Find(u);
    ll q = Find(v);
    if (p != q)
        parent[q] = p;
}

int main()
{
    ll t,n,k,m,l,r,mn=0, mx=0,sum=0, ans=0,nm=0,cnt=0,x,y,z;
    int  cs=0;

    sl2(n, k);
    for(ll i=1; i<=n; i++)
        parent[i]=i;

    for(int i=0; i<k; i++)
    {
        scanf(" %c", &c);
        sl2(x, y);
        if(c=='?')
        {
           ll p = Find(x);
           ll pp = Find(y);
           if(p==pp) yes;
           else no;
        }
        else
        {
           Union(x,y);
        }

        //cout<<c<<" "<<x<<" "<<y<<endl;
    }
}
