/*----- Problem Link: https://codeforces.com/contest/1923/problem/B  */

//#include<bits/stdc++.h>
#include<iostream>
#include<cmath>
#include<cstdio>
#include<cctype>
#include<vector>
#include<bitset>
#include<map>
#include<cstring>
#include<set>
#include<stack>
#include <climits>
#include<unordered_set>
#include<unordered_map>
#include<algorithm>
#include<numeric>
#include<cstdio>
#include<iomanip>
#include<string>
using namespace std;

/*sort form------------------------------------*/
#define pi          acos(-1.0)
#define PI          (2*acos(0.0))
#define nl          "\n"
#define yes         cout<<"YES"<<nl;
#define no          cout<<"NO"<<nl;
/*---------------------------------------------*/

/*data type -----------------------------------*/
#define ulli        unsigned long long int
#define lli         long long int
#define ll          long long
#define ld          long double
#define i_in(p)     scanf("%d", &p)
/*---------------------------------------------*/

/*container -----------------------------------*/
#define vint        vector<int>
#define vll         vector<long long>
#define vlli        vector<long long int>
#define vchar       vector<char>
/*---------------------------------------------*/

/*container input and output-------------------*/
#define inv(v)      for(auto& i:v) cin>>i
#define outv(v)     for(auto& i:v) cout<<i<<" "
/*---------------------------------------------*/


/*container function --------------------------*/
#define all(v)      v.begin(),v.end()
#define rall(v)     v.rbegin(),v.rend()
#define sum(a)      ( accumulate ((a).begin(), (a).end(), 0ll))
#define mine(a)     (*min_element((a).begin(), (a).end()))
#define maxe(a)     (*max_element((a).begin(), (a).end()))
#define mini(a)     ( min_element((a).begin(), (a).end()) - (a).begin())
#define maxi(a)     ( max_element((a).begin(), (a).end()) - (a).begin())
#define lowb(a, x)  ( lower_bound((a).begin(), (a).end(), (x)) - (a).begin())
#define uppb(a, x)  ( upper_bound((a).begin(), (a).end(), (x)) - (a).begin())
#define Sort(a)     ( sort((a).begin(), (a).end()))
#define Sort_d(a)   ( sort(a.begin(), a.end(), greater<int>()))
/*---------------------------------------------*/

#define precision(n) fixed<<setprecision(n)
#define fast ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);

/*my function ---------------------------------*/
#define max2(x,y)   ((x>y)?x:y)
#define min2(x,y)   ((x<y)?x:y)
#define gcd(x,y)    __gcd(x,y)
#define lcm(x,y)    ((x*y)/(gcd(x,y)))
#define mod         1000000007
#define II ({ int a; cin>>a; a; })
#define SS ({ string s; cin>>s; s; })
/*---------------------------------------------*/

/*bit manipulation-----------------------------*/
#define pow2(n)     (1<<n)
#define MAX         INT_MAX
#define MIN         INT_MIN
#define ishigh(num, position)       ((num&(1<<position))>0? 1:0)
#define ll_count_one(num)           (__builtin_popcountll(num))
#define int_count_one(num)          (__builtin_popcount(num))
#define ll_count_parity(num)        (__builtin_parityll(num))
#define int_count_parity(num)       (__builtin_parity(num))
#define ll_count_clz(num)           (__builtin_clzll(num))
#define int_count_clz(num)          (__builtin_clz(num))
#define ll_count_ctz(num)           (__builtin_ctzll(num))
#define int_count_ctz(num)          (__builtin_ctz(num))

#define toupper(char)               (char & '_')
//cout<<(char)toupper('a')<<nl; out:A
#define tolower(char)               (char | ' ')
//cout<<(char)tolower('B')<<nl; out:b
#define string_lower(s)             (transform(s.begin(), s.end(), s.begin(), ::tolower))
#define string_upper(s)             (transform(s.begin(), s.end(), s.begin(), ::toupper))
/*---------------------------------------------*/

/*sort calculation function--------------------*/
lli factorial(lli n)       //return n!
{
    return (n==1||n==0)? 1 : n * factorial(n-1);
}
/*---------------------------------------------*/

/*char array-----------------------------------*/
char alplc[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
char alpuc[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
vector<char>vowel={'A','a','E','e','I','i','O','o','U','u'};
char consonants [42]={'B','b','C', 'c','D','d','F','f','G','g','H','h','J','j','K','k','L','l','M','m','N','n','P','p','Q','q','R','r','S','s','T','t','V','v','W','w','X','x','Y','y','Z','z'};
/*---------------------------------------------*/


/*vector<pair<int,int>-----comparator-----------------------------------*/
bool first_dec(const pair<int,int> &a, const pair<int,int> &b)
{
    return (a.first > b.first);
}
bool second_inc(const pair<int,int> &a, const pair<int,int> &b)
{
    return (a.second < b.second);
}
bool second_dec(const pair<int,int> &a, const pair<int,int> &b)
{
    return (a.second > b.second);
}

bool first_inc_second_dec(const pair<int, int>& a, const pair<int, int>& b)
{
    if (a.first != b.first)
        return (a.first < b.first);
    else
       return (a.second > b.second);
}
bool first_dec_second_inc(const pair<int, int>& a, const pair<int, int>& b)
{
    if (a.first != b.first)
        return (a.first > b.first);
    else
       return (a.second < b.second);
}
/*----------------------------------------------------------------------*/

/*------------------------STL--------------------*/
/*---------------------------------------------
multiset :
    sorted and contains duplicate value
    multiset<int, greater<int>>mlset;
    8 7 5 5 4 3
    multiset<int>mlset;
    3 4 5 5 7 8
    insert() : O(log n)
    erase() O(log n)
---------------------------------------------*/


/*---------------------seive------------------*/
/*const int M = 1e9 + 7, N = 1e7 + 5;


bool siv[N];
void sv() {
    siv[0] = siv[1] = 1;
    for(int i = 4; i < N; i += 2) siv[i] = 1;
    for(int i = 3; i * i < N; i += 2) {
        if(!siv[i]) {
            for(int j = i * i; j < N; j += (i << 1)) siv[j] = 1;
        }
    }
}
*/

ll dr[]={1,-1,0,0};
ll dc[]={0,0,1,-1};


void solve_the_problem(int T)
{
    
    lli n, k, kk;
    cin>>n>>k;
    vlli a(n), x(n);
    inv(a);
    inv(x);
    kk = k;
    vector<pair<int,int>>pr;
    for(int i = 0; i<n; i++)
    {
        lli dif = abs(x[i]);
        pr.push_back({dif, a[i]});
    }
    sort(pr.begin(), pr.end());
    lli sum = 0, time = 0, have = 0, use = 0;
    for(int i = 0; i<n; i++)
    {
         have = pr[i].first*kk;
         if(pr[i].second>(have-use))
         {
            cout<<"NO"<<nl;
            return;
         }
         else
         {
            use+=pr[i].second;
         }         
    }
    cout<<"YES"<<nl;
}

    
int main()
{
    //fast;
    //int t;
    //fact_mod();
    int t = 1;
    cin>>t;
    for(int i = 1; i<=t; i++) 
        solve_the_problem(i);
}
