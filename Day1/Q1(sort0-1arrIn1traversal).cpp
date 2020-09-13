void sortArrInOneTraversal(int arr[],int n){
    int j=-1;
    for(int i=0;i<n;i++){
        if(arr[i]<1){
            j++;
            swap(arr[i],arr[j]);
        }
    }
}