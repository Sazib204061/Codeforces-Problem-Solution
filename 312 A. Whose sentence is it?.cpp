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
    int n;
    cin>>n;
    string str;
    getline(cin, str);
    while(n--){

        getline(cin,str);

        string Freda = "", Rainbow = "";
        
        int x = str.size();
        for(int i = 0; (i<5 && i<x); i++)
        {
            Rainbow+=str[i];
        }
        for(int i = x-1; i>=x-5; i--)
        {
            Freda+=str[i];
        }
        reverse(Freda.begin(), Freda.end());

        if((Rainbow=="miao." && Freda=="lala.") || (Rainbow!="miao." && Freda!="lala."))
        {
            cout<<"OMG>.< I don't know!"<<endl;
        }
        else if(Rainbow=="miao.")
        {
            cout<<"Rainbow's"<<endl;
        }
        else
        {
            cout<<"Freda's"<<endl;
        }
    }
}

    
int main()
{
    solve_the_problem();
}
