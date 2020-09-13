int kadane(int arr[],int n){
    int maxSoFar=0;
    int maxEndHere=0;
    for(int i=0;i<n;i++){
        maxEndHere=maxEndHere+arr[i];
        if(maxEndHere<0)
        maxEndHere=0;
        if(maxEndHere>maxSoFar)
        maxSoFar=maxEndHere;
    }
}
int maxCirSum(int arr[],int n){
    int maxKadaneSum=kadane(arr,n);
    int maxWrapSum=0;
    for(int i=0;i<n;i++){
        maxWrapSum+=arr[i];
        arr[i]=-arr[i];
    }
    maxWrapSum+=kadane(arr,n);
    return (maxWrapSum>maxKadaneSum)? maxWrapSum:maxKadaneSum;
}