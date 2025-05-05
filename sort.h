void selection_sort(int arr[],int size){
    for(int i=0;i<size-1;i++){
        int min_index=i;
        for(int j=i+1;j<size;j++){
            if (arr[j]<arr[min_index]){
                min_index=j;
            }
        }
        int temp=arr[min_index];
        arr[min_index]=arr[i];
        arr[i]=temp;
        for(int m=0;m<size;m++){
            printf("%d ",arr[m]);
        }
        printf("\n");
    }  
    for(int k=0;k<size;k++){
        printf("%d ",arr[k]);
    }
}

void bubble_sort(int arr[],int size){
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-i-1;j++){
            if (arr[j+1]<arr[j]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                for(int m=0;m<size;m++){
                    printf("%d ",arr[m]);
                }
                printf("\n");
            }
        }
    }
    for(int k=0;k<size;k++){
        printf("%d ",arr[k]);
    }
}

void insertion_sort(int arr[],int size){
    for(int i=1;i<size;i++){
        int key=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=key;
        for(int m=0;m<size;m++){
            printf("%d ",arr[m]);
        }
        printf("\n");
    }
    for(int k=0;k<size;k++){
        printf("%d ",arr[k]);
    }
}