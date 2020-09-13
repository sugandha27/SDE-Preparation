#include<vector>
#include<unordered_set>
std::vector<int> intersection(std::vector<int> n1, std::vector<int> n2){
    std::unordered_set<int> a,b;
    std::vector<int> ans;
    for(int i=0;i<n1.size();i++)
    a.insert(n1[i]);
    for(int i=0;i<n2.size();i++)
    b.insert(n1[i]);
    for(auto x:a){
        if(b.find(x)!=b.end())
        ans.push_back(x);
    }
    return ans;
}