/*Write a program to create a list using array and delete the first occurrence of specified element from the list and print.

Input Format

Read list size i.e N
Read N elements in list
Read element that you want to delete
Constraints

1 <= N <= 100

Output Format

Display the list with space seperated after deleteing the specified element.*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define max_size 100

void deletion(int arr[],int *size,int element){
    int pos=-1,i;
    for(i=0;i<*size;i++){
        if(arr[i]==element){
            pos=i;
            break;
        }
    }
    if(pos!= -1){
        for(i=pos;i<*size-1;i++){
            arr[i]=arr[i+1];
        }
        (*size)--;
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
