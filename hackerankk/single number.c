/*Problem Statement

Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.

You must implement a solution with a linear runtime complexity and use only constant extra space.



Input Format

Read Array Size i.e N
Read N elements in an array
Constraints

1 <= array.length <= 3 * 10000
-3 * 10000 <= array[i] <= 3 * 10000
Each element in the array appears twice except for one element which appears only once.
Output Format

Print the element appears only once.*/


#include <stdio.h>



int singleNumber(int* nums, int numsSize) {
    int result = 0;
    for (int i = 0; i < numsSize; i++) {
        int isUnique = 1;
        for (int j = 0; j < numsSize; j++) {
            if (nums[i] == nums[j] && i != j) {
                isUnique = 0;
                break;
            }
        }
        if (isUnique) {
            result = nums[i];
            break;
        }
    }
    return result;
}




int main() {
    int n;

   
    scanf("%d", &n);

    int nums[n];

   
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int single_element = singleNumber(nums, n);

    printf("%d\n", single_element);

    return 0;
}
