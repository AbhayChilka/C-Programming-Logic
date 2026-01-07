#include<stdio.h>
#include<stdlib.h>

/*
Given an integer array nums sorted in non-decreasing order, 
remove the duplicates in-place such that each unique element appears only once. 
The relative order of the elements should be kept the same.

Consider the number of unique elements in nums to be k​​​​​​​​​​​​​​. 
After removing duplicates, return the number of unique elements k.

The first k elements of nums should contain the unique numbers in sorted order. 
The remaining elements beyond index k - 1 can be ignored.

Example 1:
Input: nums = [1,1,2]
Output: 2, nums = [1,2,_]
Explanation: Your function should return k = 2, with the first two elements of nums being 1 and 2 respectively.
It does not matter what you leave beyond the returned k (hence they are underscores).

Example 2:
Input: nums = [0,0,1,1,1,2,2,3,3,4]
Output: 5, nums = [0,1,2,3,4,_,_,_,_,_]
Explanation: Your function should return k = 5, with the first five elements of nums being 0, 1, 2, 3, and 4 respectively.
It does not matter what you leave beyond the returned k (hence they are underscores).
*/

int removeDuplicates(int* nums, int numsSize) 
{
    if(numsSize == 0)
    {
        return 0;
    }
    
    int temp = 0;

    for(int i = 1; i < numsSize; i++)
    {
        if(nums[i] != nums[temp])
        {
            temp++;
            nums[temp] = nums[i];
        }
    }
    return temp+1;
}

int main()
{
    int *ptr = NULL;
    int num = 3;
    int iRet = 0;

    ptr = (int*)malloc(num*sizeof(int));

    ptr[0] = 1;
    ptr[1] = 1;
    ptr[2] = 2;

    printf("Elements is array are %d\n", num);

    for (int i = 0; i < num; i++)
    {
        printf("%d\t", ptr[i]);
    }
    printf("\n");
    
    iRet = removeDuplicates(ptr, num);

    printf("Elements is array are %d\n", iRet);

    for (int i = 0; i < num; i++)
    {
        printf("%d\t", ptr[i]);
    }
    printf("\n");
    
    free(ptr);

    return 0;
}