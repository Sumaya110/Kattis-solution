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

int x[5]= {0, 1, 0, -1};
int y[5]= {1, 0, -1, 0};

ll a[500010];
map<string, string>b, e;
map<string, ll>mp;
vector<ll>v;
vector<pll>vp;
string s,q;
char c;

int main()
{
    ll t,n,k,m,l,r,mn=0, mx=0,sum=0, ans=0,nm=0,cnt=0,x,y,z;
    int  cs=0;

    b["Jan"]="Capricorn", mp["Jan"]= 20;
    e["Jan"] ="Aquarius";

    b["Feb"]="Aquarius", mp["Feb"]= 19;
    e["Feb"] ="Pisces";

    b["Mar"]="Pisces", mp["Mar"]= 20;
    e["Mar"] ="Aries";

    b["Apr"]="Aries", mp["Apr"]= 20;
    e["Apr"] ="Taurus";

    b["May"]="Taurus", mp["May"]= 20;
    e["May"] ="Gemini";

    b["Jun"]="Gemini", mp["Jun"]= 21;
    e["Jun"] ="Cancer";

    b["Jul"]="Cancer", mp["Jul"]= 22;
    e["Jul"] ="Leo";

    b["Aug"]="Leo", mp["Aug"]= 22;
    e["Aug"] ="Virgo";

    b["Sep"]="Virgo", mp["Sep"]= 21;
    e["Sep"] ="Libra";

    b["Oct"]="Libra", mp["Oct"]= 22;
    e["Oct"] ="Scorpio";

    b["Nov"]="Scorpio", mp["Nov"]= 22;
    e["Nov"] ="Sagittarius";

    b["Dec"]="Sagittarius", mp["Dec"]= 21;
    e["Dec"] ="Capricorn";



    sl(n);
    for(int i=0; i<n; i++)
    {
        cin>>x>>s;
        y= mp[s];

        if(y>=x) q=b[s];
        else q=e[s];
        cout<<q<<endl;
    }
}
