#include<climits>
#include<algorithm>
#include<math.h>
using namespace std;

//naive approach
int dist(int arr[],int n,int x,int y){
    int minDist=INT_MAX;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if((arr[i]==x && arr[j]==y) || (arr[j]==x && arr[i]==y) && minDist>abs(i-j))
            minDist=abs(i-j);
        }
    }
    return minDist;
}

//better approach
int dist(int arr[],int n,int x,int y){
    int prev=-1;
    int minDist=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]==x||arr[i]==y){
            if(prev !=-1 && arr[i]!=arr[prev])
            minDist=min(minDist,i-prev);
                prev=i;
        }
    }
    if(minDist==INT_MAX)
    minDist=-1;
    return minDist;
}