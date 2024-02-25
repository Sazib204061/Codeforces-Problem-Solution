/*------Problem link: https://codeforces.com/contest/339/problem/D  */

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

#define mx 1000005
lli arr[mx], op = 0;
lli tree[mx * 3];
void init(lli node, lli b, lli e)
{
    if (b == e) {
        tree[node] = arr[b];
        op = 0;
        return;
    }
    lli Left = node * 2;
    lli Right = node * 2 + 1;
    lli mid = (b + e) / 2;
    init(Left, b, mid);
    init(Right, mid + 1, e);
    if(op%2==0)
    {
        tree[node] = tree[Left] | tree[Right];
    }
    else
    {
        tree[node] = tree[Left] ^ tree[Right];
    }
    op++;
    //tree[node] = tree[Left] + tree[Right];
}

void update(lli node, lli b, lli e, lli i, lli newvalue)
{
    if (i > e || i < b)
        return; 
    if (b >= i && e <= i) { 
        tree[node] = newvalue;
        op = 0;
        return;
    }
    lli Left = node * 2; 
    lli Right = node * 2 + 1;
    lli mid = (b + e) / 2;
    update(Left, b, mid, i, newvalue);
    update(Right, mid + 1, e, i, newvalue);

    if(op%2==0)
    {
        tree[node] = tree[Left] | tree[Right];
    }
    else
    {
        tree[node] = tree[Left] ^ tree[Right];
    }
    op++;

    //tree[node] = tree[Left] + tree[Right];
}




//solution here
void solve_the_problem(int T)
{
    lli n, q;
    cin>>n>>q;
    n = 1<<n;
    for(lli i = 1; i<=n; i++)
    {
        cin>>arr[i];
    }

    init(1, 1, n);

    lli ind, val;
    for(lli i = 0; i<q; i++)
    {
        cin>>ind>>val;
        update(1, 1, n, ind, val);
        op = 0;
        cout<<tree[1]<<nl;
    }

}

int main()
{
    int t = 1;
    // cin>>t;
    for(int i = 1; i<=t; i++){
        solve_the_problem(i);
    }
}
