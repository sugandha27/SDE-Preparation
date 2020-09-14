#include<algorithm>
using namespace std;
int maxPathSum(int arr1[],int arr2[],int n,int m){
    int result=0;
    int sum1=0;
    int sum2=0;
    int i=0,j=0;
    while(i<n &&  j<m){
        if(arr1[i]<arr2[j])
        sum1+=arr1[i++];
        else if(arr1[i]>arr2[j])
        sum2+=arr2[j++];
        else{
            result+=max(sum1,sum2);
            sum1=0,sum2=0;
            while(i<n && j<m && arr1[i]==arr2[j]){
                result+=arr1[i++];
                j++;
            }
        }

    }
    while(i<n)
    sum1+=arr1[i];
    while(j<m)
    sum2+=arr2[j];
    result+=max(sum1,sum2);
    return result;
}