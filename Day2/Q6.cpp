#include<iostream>
using namespace std;
void arrProd(int arr[],int n){
    int left[n],right[n],prod[n];
    if(n==1){
        cout<<0;
        return;
    }
    left[0]=1;
    right[n-1]=1;
    for(int i=1;i<n;i++){
        left[i]=arr[i-1]*left[i-1];
    }
    for(int j=n-2;j>=0;j--){
        right[j]=arr[j+1]*right[j+1];
    }
    for(int i=0;i<n;i++){
        prod[i]=left[i]*right[i];
    }
    for(int i=0;i<n;i++)
    cout<<prod[i]<<" ";
}