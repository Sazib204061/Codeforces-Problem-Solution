/*----Problem Link----: https://codeforces.com/contest/225/problem/A
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

//solution here
void solve_the_problem()
{
    int n, f = 1, a, b;
    cin>>n;
    int top;
    cin>>top;
    scanf("%*d %*d");  //%*d used for skip user input

    for(int j = 1; j<n; j++)
    {
        cin>>a>>b;
        if(a==top || b==top || 7-a==top || 7-b==top)
        {
            f = 0;
        }
    }
    if(f==0)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
    }

}

    
int main()
{
    solve_the_problem();
}
