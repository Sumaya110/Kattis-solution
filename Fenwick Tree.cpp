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

int x[5]={0 , 1 , 0 , -1};
int y[5]={1 , 0 , -1 , 0};


char c;

ll a[5000005],n, bit[5000005];
int get_next(int index)
{
    return  index+ (index & -index);
}
int get_parent(int index)
{
    return  index- (index & -index);
    //return index&(index-1);
}

ll sum( int index)
{
    ll s=0;
    //index++;///porer index e jete hobe
    while(index>0)
    {
        s+=bit[index];
        index=get_parent(index);
    }
    return s;
}
void update(ll val, int index)
{
    while(index<=n)
    {
        bit[index]+=val;
        index=get_next(index);
    }
}

int main()
{
    int q,p; ll x;int y;
    cin>>n>>q;
    for(int i=0; i<q; i++)
    {
        scanf(" %c",&c );
        if(c=='+')
        {
           si(y); sl(x);
            y++;
            update(x, y);
        }
        else
        {

            si(y);
           // y++;
            ll ans = sum(y);
            pfl(ans); el;
        }
    }

}
