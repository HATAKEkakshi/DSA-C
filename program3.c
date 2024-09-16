#include<stdio.h>

int binarysearch(int arr[],int size,int element){
    int low, mid , high ;
    low=0;
    high=size-1;
    mid=(low+high)/2;
    while (low<=high)
    {
    if (arr[mid]==element){
        return mid;
    }
    if (arr[mid]<element){
        low=mid+1;
    }
    else{
        high=mid-1;
    }
    }
    return -1;
}

int main(){
    int arr[]={1,2,4,5,6,73,95,878};
    int size=sizeof(arr)/sizeof(int);
    int element=73;
    int searchindex=binarysearch(arr,size,element);
    printf("The element %d found on %d ",element,searchindex);
    return 0;
}