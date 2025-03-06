/*Write a program to create a list using array and search the given value in the list.

Input Format

Read List Size i.e. N
Read N elements in list
Read searching element
Constraints

1 <= N <= 1000 Strong Text

Output Format

Display message Found if element is avaiable in the list otherwise display message Not Found.*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d",&n);
    
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    int search,found=0;
    
    scanf("%d",&search);
     for(int i=0;i<n;i++){
        if(arr[i]==search){
            found=1;
            break;
        }
    }
    if(found==1){
        printf("Found");
    }
    else{
        printf("Not Found");
    }
    
    return 0;
}
