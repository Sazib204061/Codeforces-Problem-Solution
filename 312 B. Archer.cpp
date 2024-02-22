
/*----problem Link : https://codeforces.com/problemset/problem/312/B*/

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
    double a, b, c, d;
    cin>>a>>b>>c>>d;

    double total_possible = b*d;
    double invalid = (b-a)*(d-c);
    double possible_match = total_possible-invalid;
    double SmallR_win = a*d;
    double probability_of_SmallR = (SmallR_win/possible_match)+0.0000000001;
    cout<<probability_of_SmallR<<endl;
}

    
int main()
{
    solve_the_problem();
}
