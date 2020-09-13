#include<climits>
#include<iostream>
//naive approach- 
//sort the arr in desc order then return the second last element

//better approach
//two traversals, find the largest element in one then find the element greatest less than the max in second

//efficient approach
int secLargest(int arr[],int n){
    int first=INT_MIN;
    int second=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>first){
            second=first;
            first=arr[i];
        }
        else if(arr[i]>second && arr[i]!=first)
        second=arr[i];
    }
    if(second==INT_MIN)
    std::cout<<"No element";
    else std::cout<<second;
}
