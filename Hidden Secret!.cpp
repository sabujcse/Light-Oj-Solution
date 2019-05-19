
/*****************************************************
*#*##################################################*                                                  *
*#****************************************************                                                  *
*#*       URI:          sabujbd,                   *#*
*#*       UVA:          sabuj_coder.               *#*
*#*       LIGHTOJ:      return_SS,                 *#*
*#*       DEVSKILL:     return_SS                  *#*
*#*       CODEFORCES:   return_SS                  *#*
*#*       TIMUS:        return_SS                  *#*
*#*       CODEMARSHAL:  return_SS                  *#*
*#*       HACKERRANK    return_SSP                 *#*
*#*                                                *#*
*#*                                                *#*
*#*          Sabuj sarker                          *#*
*#*          def: CSE;                             *#*
*#*    Daffodil International University           *#*
*#*                                                *#*
*#*                                                *#*
*****************************************************
*####################################################
*****************************************************/
#include<bits/stdc++.h>
using namespace std;
#include<stack>
#include<vector>
#include<map>
#include<set>
#include<queue>
#include<list>
typedef      string                  S;
typedef      long long               ll;
typedef      long long int           lli;
typedef      unsigned int            ui ;
typedef      unsigned long long int  ulli;
typedef      double                  D;
typedef      float                   f;
typedef      int                     I;
#define      Clear(a) memset( a, 0, sizeof(a))
#define      sc     scanf
#define      pf     printf
#define      cn     cin
#define      ct     cout
#define      en     endl
#define      pb     push_back
#define      pp     pop_back
#define      t_r     true
#define      f_r     false
#define      PI    a(cos)
#define      FOR(i , x, y ) for(  i = (x); i<=(y); i++ )
#define      ROR(i , x, y ) for(  i = (x); i>=(y); i-- )
#define      N 100000
int prime[N];

int fibonacci( int n )
{
    if(n<=1)return n;
    else return fibonacci(n-1)+fibonacci(n-2);
}
int GCD( int a, int b){
    if(b==0) return a;else return GCD(b,a%b);
}
int LCM( int a, int b)
{
    return b = (a*b)/GCD(a,b);
}
void  permutation(string ss)
{sort(ss.begin(),ss.end());
    do{cout<<ss<<endl;}while(next_permutation(ss.begin(),ss.end()));}

I Bigmod( I b , lli p, I m )
{if( p== 0 ){return 1;}
    if( p % 2 == 0 )
    {lli re = Bigmod( b, p/2, m );return ( re*re )%m;}
    else if( p%2 == 1 ){lli p1 = b%m;lli p2 = Bigmod( b, p-1, m );return ( p1 * p2 )%m;}}

void Sieve_of_Eratosthenes()
{   for( int i = 2; i<=N; i++){prime[i] = 1;}
    prime[0] = prime[1] = 0;
    int root = sqrt(N);
    for( int i = 2; i<=root; i++ ){
    for( int j = i*i; j<=N; j+=i ){if(prime[j]){prime[j] = 0;}}}}

 bool  perfect_squre_check( long long  number)
 {
     if( number ==1 || number ==-1 ){return false;}
     else{bool flag = false;bool flag2 = false;
     if( number < 0 ){number = (-1)*number;flag = true;}
     for( long long  i = 1; i<= sqrt(number); i++ ){
          if( i*i == number ){flag2 = true;break;}if( i*i > number ){break;}}
     if( flag == true ){if( flag2 == true ){return true;}else{return false;}}
     else{if(flag2 == true){return true;}
        else{return false;}}}
 }
 int nCr_recurtion( int n , int r )
 {
     if( r==0||r==n)return 1;
     else return nCr_recurtion(n-1,r-1)+nCr_recurtion(n-1,r);
 }
 int nCr_n_complex( int n , int r)
{
    int nr = (n-r);
    int a_n[n],a_r[r],a_nr[nr];
    for( int i = 1; i<=n; i++ )  a_n[i] = i;
    for( int j = 1; j<=r; j++ )  a_r[j] = j;
    for( int k = 1; k<=nr;k++ )  a_nr[k] = k;
    for( int i = 2; i<=nr; i++ ){
        for( int j = 2; j<=n; j++ ){
            if( a_n[j]%a_nr[i]== 0 && (a_n[j]!=1 && a_nr[i]!=1) ){
                if(a_n[j] == a_nr[i]){a_n[j] = 1;a_nr[i] = 1;}
                else{a_n[j] = a_n[j]/a_nr[i];a_nr[i] = 1;}}}}
   for( int i = 2; i<=r; i++ ){
        for( int j = 2; j<=n; j++ ){
            if( a_n[j]%a_r[i]== 0 && (a_n[j]!=1 && a_r[i]!=1) ){
                    if(a_n[j] == a_r[i]){a_n[j] = 1;a_r[i] = 1;
                }
                else{a_n[j] = a_n[j]/a_r[i];a_r[i] = 1;}}}}
    int mul1 = 1;int mul2 = 1;int mul3 = 1;
    for( int i = 2; i<=n; i++ )mul1 = mul1*a_n[i];
    for( int j = 2; j<=nr; j++ )mul2 = mul2*a_nr[j];
    for( int k = 2; k<=r; k++ )mul3 = mul3*a_r[k];
    return mul1*mul2*mul3;

}
int  main()
{ 
    
    int test;
    string ch1;
    string ch2;
    scanf("%d",&test);
    getchar();
    for( int i = 1; i<= test; i++ )
    {
 
         int a1 = 0, b1 = 0, c1 = 0, d1 = 0, e1 = 0, f1 = 0, g1 = 0, h1 = 0, i1 = 0, j1 = 0;
         int k1 = 0, l1 = 0, m1 = 0, n1 = 0, o1 = 0, p1 = 0, q1 = 0, r1 = 0, s1 = 0, t1 = 0, u1 = 0;
         int v1 = 0, w1 = 0, x1 = 0, y1 = 0, z1 = 0;
         int a2 = 0, b2 = 0, c2 = 0, d2 = 0, e2 = 0, f2 = 0, g2 = 0, h2 = 0, i2 = 0, j2 = 0;
         int k2 = 0, l2 = 0, m2 = 0, n2 = 0, o2 = 0, p2 = 0, q2 = 0, r2 = 0, s2 = 0, t2 = 0, u2 = 0;
         int v2 = 0, w2 = 0, x2 = 0, y2 = 0, z2 = 0;
        getline(cin,ch1);
        getline(cin,ch2);
        for( int j = 0; j < ch1.size(); j++ )
        {
            if( tolower(ch1[ j ] ) == 'a' )
               {
                    a1++;
               }
            if( tolower( ch1[ j ] ) == 'b' )
               {
                   b1++;
               }
            if( tolower(ch1[ j ] ) == 'c' )
               {
                    c1++;
               }
            if( tolower( ch1[ j ] ) == 'd' )
               {
                   d1++;
               }
            if( tolower(ch1[ j ] ) == 'e' )
               {
                    e1++;
               }
            if( tolower( ch1[ j ] ) == 'f' )
               {
                   f1++;
               }
               if( tolower(ch1[ j ] ) == 'g' )
               {
                    g1++;
               }
            if( tolower( ch1[ j ] ) == 'h' )
               {
                   h1++;
               }
               if( tolower(ch1[ j ] ) == 'i' )
               {
                    i1++;
               }
            if( tolower( ch1[ j ] ) == 'j' )
               {
                   j1++;
               }
               if( tolower(ch1[ j ] ) == 'k' )
               {
                    k1++;
               }
            if( tolower( ch1[ j ] ) == 'l' )
               {
                   l1++;
               }
               if( tolower(ch1[ j ] ) == 'm' )
               {
                    m1++;
               }
            if( tolower( ch1[ j ] ) == 'n' )
               {
                   n1++;
               }
               if( tolower(ch1[ j ] ) == 'o' )
               {
                    o1++;
               }
            if( tolower( ch1[ j ] ) == 'p' )
               {
                   p1++;
               }
               if( tolower(ch1[ j ] ) == 'q' )
               {
                    q1++;
               }
            if( tolower( ch1[ j ] ) == 'r' )
               {
                   r1++;
               }
               if( tolower(ch1[ j ] ) == 's' )
               {
                    s1++;
               }
            if( tolower( ch1[ j ] ) == 't' )
               {
                   t1++;
               }
               if( tolower(ch1[ j ] ) == 'u' )
               {
                    u1++;
               }
            if( tolower( ch1[ j ] ) == 'v' )
               {
                   v1++;
               }
               if( tolower(ch1[ j ] ) == 'w' )
               {
                    w1++;
               }
            if( tolower( ch1[ j ] ) == 'x' )
               {
                   x1++;
               }
               if( tolower(ch1[ j ] ) == 'y' )
               {
                    y1++;
               }
            if( tolower( ch1[ j ] ) == 'z' )
               {
                   z1++;
               }
        }
        for( int l = 0; l< ch2.size(); l++ )
        {
            if( tolower ( ch2[ l ]) == 'a' )
            {
                a2++;
            }
            if( tolower(ch2[ l ] ) == 'b' )
            {
                b2++;
            }
             if( tolower ( ch2[ l ]) == 'c' )
            {
                c2++;
            }
            if( tolower(ch2[ l ] ) == 'd' )
            {
                d2++;
            }
             if( tolower ( ch2[ l ]) == 'e' )
            {
                e2++;
            }
            if( tolower(ch2[ l ] ) == 'f' )
            {
                f2++;
            }
             if( tolower ( ch2[ l ]) == 'g' )
            {
                g2++;
            }
            if( tolower(ch2[ l ] ) == 'h' )
            {
                h2++;
            }
             if( tolower ( ch2[ l ]) == 'i' )
            {
                i2++;
            }
            if( tolower(ch2[ l ] ) == 'j' )
            {
                j2++;
            }
             if( tolower ( ch2[ l ]) == 'k' )
            {
                k2++;
            }
            if( tolower(ch2[ l ] ) == 'l' )
            {
                l2++;
            }
             if( tolower ( ch2[ l ]) == 'm' )
            {
                m2++;
            }
            if( tolower(ch2[ l ] ) == 'n' )
            {
                n2++;
            }
             if( tolower ( ch2[ l ]) == 'o' )
            {
                o2++;
            }
            if( tolower(ch2[ l ] ) == 'p' )
            {
                p2++;
            }
             if( tolower ( ch2[ l ]) == 'q' )
            {
                q2++;
            }
            if( tolower(ch2[ l ] ) == 'r' )
            {
                r2++;
            }
             if( tolower ( ch2[ l ]) == 's' )
            {
                s2++;
            }
            if( tolower(ch2[ l ] ) == 't' )
            {
                t2++;
            }
             if( tolower ( ch2[ l ]) == 'u' )
            {
                u2++;
            }
            if( tolower(ch2[ l ] ) == 'v' )
            {
                v2++;
            }
             if( tolower ( ch2[ l ]) == 'w' )
            {
                w2++;
            }
            if( tolower(ch2[ l ] ) == 'x' )
            {
                x2++;
            }
             if( tolower ( ch2[ l ]) == 'y' )
            {
                y2++;
            }
            if( tolower(ch2[ l ] ) == 'z' )
            {
                z2++;
            }
        }
        if( ( a1 == a2 ) && ( b1 == b2 ) && ( c1 == c2 ) && ( d1 == d2 ) && ( e1 == e2 ) && ( f1 == f2 ) &&( g1 == g2 ) && ( h1 == h2 )&&( i1 == i2 ) && ( j1 == j2 )&&( k1 == k2 ) && ( l1 == l2 )&&( m1 == m2 ) && ( n1 == n2 )&&( o1 == o2 ) && ( p1 == p2 )&&( q1 == q2 ) && ( r1 == r2 )&&( s1 == s2 ) && ( t1 == t2 )&&( u1 == u2 ) && ( v1 == v2 )&&( w1 == w2 ) && ( x1 == x2 )&&( y1 == y2 ) && ( z1 == z2 ))
        {
            printf("Case %d: Yes\n",i);
        }
        else
        {
            printf("Case %d: No\n",i);
        }
    }
    return 0;
}