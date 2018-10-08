#include<stdio.h>

int binary_search(int arr[], int start, int end, int x){
    while (start<=end){

    int mid= (start+end)/2;
    if (arr[mid]==x){
        return mid;
    }
    if (arr[mid]>x){
        end=mid-1;
    }
    if (arr[mid]<x){
        start=mid+1;
    }
    }
    return -1;
}
int main(){
    int num,n;
    printf("enter size of the array :");
    int ar[100];
    scanf("%d",&n);
    printf("enter elements of the array\n");
    for (int i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }
    printf("enter number to be searched");
    scanf("%d",&num);
    int ans= binary_search(ar,0,n-1,num);
    if (ans==-1)
        printf("not found");
    else
        printf("element is present at index %d or position %d", ans, ans+1);
    return 0;
}
