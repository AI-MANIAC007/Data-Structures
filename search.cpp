#include<cstdio>
#include"sort.h"

void linear_search(int arr[],int size,int target){
    int found=0;
    for(int i=0;i<size;i++){
        if (arr[i]==target){
           found=1;
        }
    }
    if (found==1){
        printf("Element found");
    }
    else{
        printf("Element not found");
    }
    
}


void binary_search(int arr[],int size,int target){
    int left=0;
    int right=size-1;
    int found=0;
    while (left<=right) {
        int middle=(left+right)/2;
        if (arr[middle]==target){
             found=1;
        }
        if (arr[middle]<target){
            left=middle+1;
        }
        else{
            right=middle-1;
        }  
    }
    if (found==1){
        printf("Element found");
    }
    else{
        printf("Element not found");
    }
}

int main(){
    printf("Enter the size of the array:");
    int n,choice,target,c;
    scanf("%d",&n);
    printf("Enter target element:");
    scanf("%d",&target);
    int arr[n]={};
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("1.Selection sort\n2.Insertion sort\n3.Bubble sort\n");
    printf("Enter your sorting choice:");
    scanf("%d",&c);
     switch(c){
        case 1:
        selection_sort(arr,n);
        break;
        case 2:
        insertion_sort(arr,n);
        break;
        case 3:
        bubble_sort(arr,n);
        break;
     }
    printf("1.Linear search\n2.Binary search\n3.Exit\n");
    printf("Enter your choice:");
    scanf("%d",&choice);
    switch(choice){
        case 1:
        linear_search(arr,n,target);
        break;
        case 2:
        binary_search(arr,n,target);
        break;
        case 3:
        printf("Exited");
        break;
    }
}