#include<algorithm>
int maxSubarr(int arr[],int n){
    int currSum=arr[0];
    int maxSoFar=arr[0];
    for(int i=0;i<n;i++){
        currSum=std::max(arr[i],currSum+arr[i]);
        maxSoFar=std::max(currSum,maxSoFar);
    }
    return maxSoFar;
}