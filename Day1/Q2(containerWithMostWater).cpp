//naive approach
#include<algorithm>
int maxArea(int arr[],int n){
    int area=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            area=std::max(area,std::min(arr[i],arr[j])*(j-i));
        }
    }
}

//efficient approach
int maxArea(int arr[],int n){
    int first=0;
    int last=n-1;
    int area=0;
    while(first<last){
        area=std::max(area,std::min(arr[first],arr[last])*(last-first));
        if(arr[first]<arr[last])
        first++;
        else last--;
    }
    return area;
}