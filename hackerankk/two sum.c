/*Problem
Submissions
Leaderboard
Discussions
Problem Statement

Given an array of integers nums and an integer target, print indices(index) of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.



Input Format

Input the size of array i.e N
Read N elements in an array
Read target value
Constraints

2 <= array.length <= 10000
Output Format

print indices(index) of the two numbers such that they add up to target in single line with space seperated*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,target,i=0,j=0;
scanf("%d",&n);
    int arr[n];
    
    for( i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    scanf("%d",&target);
    
    for( i=0;i<n;i++){
       for(j=i+1;j<n;j++){
           if(arr[i]+arr[j]==target)
               printf("%d %d",i,j);
               
       }
    }
   
       
    return 0;
}
