#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;
void interval(vector<pair<int,int>> v, int n){
    vector<int> out;
    sort(v.begin(),v.end());
    out.push_back(v[0].first);
    int inter=v[0].second;
    for(int i=1;i<v.size();i++){
        if(v[i].first>inter){
            out.push_back(inter);
            out.push_back(v[i].first);
            inter=v[i].second;
        }
        else if(v[i].second>inter){
            inter=v[i].second;
        }
    }
    out.push_back(inter);
    for(auto s:out)
    cout<<s<<" ";
}