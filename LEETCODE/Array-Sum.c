#include<stdio.h>

void twoSum(int nums[], int target, int numsSize)
{
    int i, j;
    for(i = 0; i < numsSize; i++)
    {
        for(j = i + 1; j < numsSize; j++)
        {
            if(nums[i] + nums[j] == target)
            {
                printf("[%d %d]", i, j);
            }
        }
    }
    printf("No pair found.");
}

int main()
{
    int i, target, numsSize;
    printf("Enter the array size: ");
    scanf("%d", &numsSize);
    int nums[numsSize];

    printf("Enter the target: ");
    scanf("%d", &target);

    printf("Enter %d elements:\n", numsSize);
    for(i = 0; i < numsSize; i++)
    {
        scanf("%d", &nums[i]);
    }

    twoSum(nums, target, numsSize);
    return 0;
}
