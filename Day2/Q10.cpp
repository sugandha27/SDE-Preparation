void rotate(int arr[],int n,int d){
    
    for(int i=0;i<d;i++){
        int temp=arr[0],j;
        while(j<n-1){
            arr[j]=arr[j+1];
            j++;
        }
        arr[j]=temp;
    }
}