#include<bits/stdc++.h>
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
#define PI 2 * acos (0.0)
using namespace std;
 
int main()
{
    double r, s, sq;
    int test;
    cin>>test;
    for( int i = 1; i<= test; i++ )
    {
        cin>>r;
 
        sq = 4.0*r*r;
        s = PI *r*r;
        printf("Case %d: %0.2lf\n",i,sq - s);
    }
    return 0;
}