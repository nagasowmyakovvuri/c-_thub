#include<iostream>
#include<vector>
#include<iterator>
using namespace std;
bool comp(const pair<int,int>&a,const pair<int,int>&b){
   // if(a.first==b.first)
    return a.second<b.second
}
int main()
{
    vector<vector<int>>grid(5,vector<int>(5,10));
    pair<int,int>p(10,20);
    vector<pair<int,int>>vp;
    vp.push_back({10,20});
    vp.push_back({20,30});
    vp.push_back({1,19});
    sort(vp.begin(),vp.end(),comp);
    auto it=vp.begin;
    for(it;it<vp.end();it++)
    {
        cout<<vp[it]<<end=" ";
    }
}