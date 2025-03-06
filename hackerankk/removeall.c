/*Given an integer array and an integer value i.e val, remove all occurrences of val in that array in-place. The order of the elements may be changed.

Consider the number of elements in an array which are not equal to value be k, to get accepted, you need to do the following things:

Change the array such that the first k elements of array contain the elements which are not equal to val.


Input Format

Read List Size i.e N
Read N elements in an array
Read element that you want to remove
Constraints

1 <= N <= 100

Output Format

Display list after removing all occurence of given value in single line with space seperated.*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define max_size 100

void deletion(int arr[],int *size,int element){
    int j,i;
    for(i=0;i<*size;i++){
        if(arr[i]==element){
          for(j=i;j<*size-1;j++) {
              arr[j]=arr[j+1];
          }
            (*size)--;
            i--;
        }
    }
   
}

int main() {
int n,to_delete;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&to_delete);
    
    deletion(arr,&n,to_delete);
    
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}