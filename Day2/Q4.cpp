#include<vector>
#include<algorithm>
using namespace std;
vector<bool> processQueries(int arr[],int n, vector<pair<int,int>> &queries,int q){
    int left[n],right[n];
    left[0]=0;
    int lastInc=0;
    for(int i=1;i<n;i++){
        if(arr[i]>arr[i-1])
        lastInc=i;
        left[i]=lastInc;
    }
    right[n-1]=n-1;
    int firstDec=n-1;
    for(int j=n-2;j>=0;j--){
        if(arr[j]>arr[j+1])
        firstDec=j;
        right[j]=firstDec;
    }
    vector<bool> v;
    for(int i=0;i<q;i++){
        int l=queries[i].first;
        int r=queries[i].second;
        if(right[l]>=left[r])
        v.push_back(true);
        else v.push_back(false);
    }

    return v;
}