#include<iostream>
void countFreq(int arr[],int n){
    for(int i=0;i<n;i++)
    arr[i]--;
    for(int i=0;i<n;i++)
    arr[arr[i]%n]+=n;
    for(int i=0;i<n;i++){
        std::cout<<i+1<<" "<<arr[i]/n<<"\n";
        arr[i]=arr[i]%n+1;
    }
}