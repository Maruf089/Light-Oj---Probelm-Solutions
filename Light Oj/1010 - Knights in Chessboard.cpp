#include<bits/stdc++.h>
#define endl '\n'
#define sf scanf
#define pf printf

#define _case cout<<"Case "<<++cs<<": "
#define lp(loop,start,end) for(ll loop=start;loop<=end;loop++)
#define lpd(loop,start,end) for(ll loop=end;loop>=start;loop--)

#define D(x) cout<< #x " = "<<x<<endl
#define cout(case)   cout << "Case " << ++cs << ": " ;
#define foreach(i,c) for(__typeof(c.begin())i=c.begin();i!=c.end();i++)


#define PI acos(-1)
#define ll long long int
#define ull unsigned long long

#define vi vector <int>
#define vll vector <ll>
#define vs vector <string>
#define pb push_back
#define mpii map <int,int>
#define mpsi map <string,int>
#define mpll map <long long,long long>
#define MP make_pair
#define F first
#define S second

#define GCD(a,b) __gcd(a,b)
#define LCM(a,b) (a*(b/__gcd(a,b)))

#define INF 10^18
#define MOD 1000000007
#define countv(v,a) count(v.begin(),v.end(),a)
#define grtsrt(v) sort(v.begin(),v.end(),greater<int>())
#define mnv(v) *min_element(v.begin(),v.end())
#define mxv(v) *max_element(v.begin(),v.end())
#define uniq(v) v.resize( unique(all(v)) - v.begin())


#define rev(v) reverse(v.begin(),v.end())
#define srt(v) sort(v.begin(),v.end())

#define all(v) v.begin(),v.end()
#define MEM(a, b) memset(a, b, sizeof(a))

#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
#define fi freopen("input.txt","r",stdin);
#define fo freopen("output.txt","w",stdout)

string s,s1;
ll n,m,a,b,i,j,d,t,cs=0,counT=0,k,ans=0,l=0,temp=0,sum=0,Max,Min,num;

int main()
{

    scanf("%lld",&n);
    while(n--)
    {

 scanf("%lld %lld",&a,&b);
        printf("Case %lld: ",++cs);
ans = 0 ;
        if( a== 1 or b == 1)
            ans = a*b ;

        else if( a == 2 or b == 2 )
        {
            if(a<b)
            swap(a,b);
            t = a / 4;
            if(a%4==0 )
                ans =  4*t ;

            else if( a %4 == 1 )
                ans = 4*t+2 ;

            else if( a%4 == 3 or a%4 == 2 )
                ans = 4*t+4 ;

        }
        else
            ans = (a*b+1)/2;

            printf("%lld\n" ,ans );
    }


}

