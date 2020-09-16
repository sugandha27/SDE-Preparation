#include<algorithm>
using namespace std;
//naive approah
int maxDiff(int arr[],int n){
    int indexDiff=-1;
    for(int i=0;i<n;i++){
        for(int j=n-1;j>=0;j--){
            if(arr[j]>arr[i] && indexDiff<(j-i))
            indexDiff=j-i;
        }
    }
    return indexDiff;
}

//efficient approach
int maxDiff(int arr[],int n){
    int lMin[n],rMax[n];
    int indexDiff=-1;
    lMin[0]=arr[0];
    for(int i=1;i<n;i++){
        lMin[i]=max(arr[i],lMin[i-1]);
    }
    rMax[n-1]=arr[n-1];
    for(int j=n-1;j>=0;j--)
    rMax[j]=max(arr[j],rMax[j+1]);
    int i=0;
    int j=0;
    while(i<n && j<n){
        if(lMin[i]<rMax[j]){
        indexDiff=max(indexDiff,j-i);
        j++;
        }
        else i++;
    }
    return indexDiff;
}