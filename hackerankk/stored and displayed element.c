/*Write a program to store N elements into the list(Array) and display them.

Input Format

Read list size i.e N
Read N elements into the list
Constraints

No

Output Format

Display all elements of the list in single line with space separated.*/

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
    
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    
      
    return 0;
}
