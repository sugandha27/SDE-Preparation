#include<iostream>
#include<math.h>
//use arr itself as hashmap since key lies in 0 to n-1
void duplicates(int arr[],int n){
    for(int i=0;i<n;i++){
        if(arr[abs(i)]>=0)
        arr[abs(arr[i])]=-arr[abs(arr[i])];
        else std::cout<<arr[i]<<" ";
    }
}