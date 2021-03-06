#include<iostream>
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<cmath>
#include<algorithm>
#include<vector>
#include<string>
#include<stack>
#include<queue>
#include<map>
#include<sstream>
#define FOR(i, s, e) for(int i=s; i<e; i++)
#define loop(i, n) for(int i=0; i<n; i++)
#define getint(n) scanf("%d", &n)
#define pb(a) push_back(a)
#define ll long long
#define SZ(a) int(a.size())
#define read() freopen("input.txt", "r", stdin)
#define write() freopen("output.txt", "w", stdout)
#define mem(a, v) memset(a, v, sizeof(a))
#define all(v) v.begin(), v.end()
#define pi acos(-1.0)
#define INF 1<<29
#define mod(a) (a>0?a:-a)
#define pf printf
#define sf scanf
using namespace std;
int main()
{
    long long int decimal;
    int bionary[ 1000 ];
    int test;
    cin>>test;
    for( int i = 1; i<= test; i++ )
    {
        cin>>decimal;
        int n = 1;
        while( decimal != 0 )
        {
            bionary [ n++ ] = decimal % 2;
            decimal = decimal / 2;
        }
        int count = 0;
        for( int j = n - 1; j > 0; j-- )
        {
            if( bionary[ j ] == 1 )
            {
                count++;
            }
        }
       if( count % 2 == 1 )
       {
           printf("Case %d: odd\n",i);
       }
       else
       {
           printf("Case %d: even\n",i);
       }
    }
    return 0;
}