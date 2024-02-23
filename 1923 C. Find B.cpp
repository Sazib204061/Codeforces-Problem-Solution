
/*----problem Link : https://codeforces.com/contest/1923/problem/C  */
 
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

//solution here
void solve_the_problem()
{
    lli n, q;
    cin>>n>>q;
    vlli ar(n);
    inv(ar);
    vlli pre_sum(n);
    vlli one_cnt(n);
    pre_sum[0] = ar[0];
    if(ar[0]==1)one_cnt[0] = 1;
    for(int i = 1; i<n; i++)
    {
        pre_sum[i] = pre_sum[i-1]+ar[i];
        if(ar[i]==1)
        {
            one_cnt[i] = one_cnt[i-1]+1;
        }
        else
        {
            one_cnt[i] = one_cnt[i-1];
        }
    }

    while(q--)
    {
        lli l, r;
        cin>>l>>r;
        if(l==r)
        {
            cout<<"NO"<<nl;
            continue;
        }
        l-=1, r-=1;
        lli sum, one, non_one;
        if(l>0)
        {
            sum = pre_sum[r]-pre_sum[l-1];
            one = one_cnt[r]-one_cnt[l-1];
        }
        else
        {
            sum = pre_sum[r];
            one = one_cnt[r];
        }
        non_one = ((r-l)+1)-one;
        //cout<<sum<<" "<<one<<nl;
        if(sum-(2*one)<non_one)
        {
            cout<<"NO"<<nl;
        }
        else{
            cout<<"YES"<<nl;
        }

    }
}

    
int main()
{
    int t = 1;
    cin>>t;
    for(int i = 1; i<=t; i++){
        solve_the_problem();
    }
}
