#include <stdio.h>

int linearsearch(int arr[],int size,int element){
    for(int i=0;i<size;i++){
        if(arr[i]==element){
            return i;
        }
    }return -1;
}


int main(){
    int arr[]={1,2,4,5,6,73,65,878,324,2432};
    int size=sizeof(arr)/sizeof(int);
    int element=4;
    int searchindex=linearsearch(arr,size,element);
    printf("The element %d found on %d ",element,searchindex);
    return 1;
}