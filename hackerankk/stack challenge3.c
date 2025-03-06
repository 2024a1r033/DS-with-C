/*Write a program to create a stack with N elements and print stack element in desending order.

Input Format

First Line take an input on N
Input N element in stack
Constraints

1 <= N <= 100

Output Format

Display All Stack Element in desending order with space seperated.*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int n,i,j,temp=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
    scanf("%d",&arr[i]);
        
    }
   for(i=0;i<n;i++)
   {
      for(j=i+1;j<n;j++){
          if(arr[i]<arr[j]){
              temp=arr[i];
          arr[i]=arr[j];
          arr[j]=temp;
              
      }
       
      } 
      
   }
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
  
    return 0;
}
