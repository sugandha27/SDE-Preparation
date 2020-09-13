#include<algorithm>
int maxSumInConf(int arr[],int n){
    int sum=0;
    int maxSum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        maxSum+=i*arr[i];
    }
    int res=maxSum;
    for(int i=1;i<n;i++){
        maxSum=maxSum-(sum-arr[i-1])+(n-1)*arr[i-1];
        res=std::max(maxSum,res);
    }
    return res;
}