//Missing number in array
#include <stdio.h>
int missingNumber(int* nums, int numsSize)
{
    int expected = numsSize * (numsSize + 1) / 2;
    int actual = 0;
    for(int i = 0; i < numsSize; i++)
        actual += nums[i];

    return expected - actual;
}
int main()
{
    int nums[] = {3,0,1};
    int size = sizeof(nums)/sizeof(nums[0]);

    printf("%d", missingNumber(nums, size));
    return 0;
}