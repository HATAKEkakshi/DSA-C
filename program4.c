#include <stdio.h>
void printArray(int* A,int n){
    for(int i=0;i<n;i++){
        printf("%d",A[i]);
    }
    printf("\n");
}

void sort(int* A, int n){
    int temp;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(A[j]>A[j+1]){
                temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
            }
        }
    }
}
int main(){
    int A[]={1,2,3,4,5,645,67867,45};
    int n=8;
    printArray(A,n);//Printing the array before the sorting
    sort(A,n);//sorting the array
    printArray(A,n);//printing the array after the sorting
    return 0;
}