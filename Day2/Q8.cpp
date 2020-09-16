#include<unordered_set>
#include<vector>
using namespace std;
vector<int> removeDuplicates(vector<int>vect){
    unordered_set<int> s(vect.begin(),vect.end());
    vect.assign(s.begin(),s.end());
    return vect;
}
//to retain first occurence
vector<int> remove(vector<int> & arr,int n){
    int h[100]={0};
    //2<=arr[i]<=100
    for(int i=0;i<n;i++)
    h[arr[i]]++;
    vector<int> out;
    for(int i=0;i<n;i++){
        if(h[arr[i]]>=1){
            out.push_back(arr[i]);
            h[arr[i]]=0;
        }
    }
    return out;
}