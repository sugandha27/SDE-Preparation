#include<iostream>
using namespace std;
void rearrange(int arr[],int n){
    for(int i=0;i<n;i++){
        arr[i]+=(arr[arr[i]]%n)*n;
    }
    for(int i=0;i<n;i++)
    arr[i]/=n;
}
//Let’s assume an element is a and another element is b, both the elements are less than n. So if an element a is incremented by b*n. So the element becomes a + b*n so when a + b*n is divided by n then the value is b and a + b*n % n is a.
// cout<<arr[arr[i]]<<" ";
