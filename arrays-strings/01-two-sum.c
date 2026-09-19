#include <stdio.h>
#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int* result = (int*)malloc(2 * sizeof(int));
    *returnSize = 2;
    
    for (int i = 0; i < numsSize; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                result[0] = i;
                result[1] = j;
                return result;
            }
        }
    }
    return result;
}

int main() {
    int returnSize;

    // Test Case 1: Typical case
    int nums1[] = {2, 7, 11, 15};
    int target1 = 9;
    int* res1 = twoSum(nums1, 4, target1, &returnSize);
    printf("Test Case 1 Output: [%d, %d] (Expected: [0, 1])\n", res1[0], res1[1]);
    free(res1);

    // Test Case 2: Edge case (target formed by consecutive elements at the end)
    int nums2[] = {3, 2, 4};
    int target2 = 6;
    int* res2 = twoSum(nums2, 3, target2, &returnSize);
    printf("Test Case 2 Output: [%d, %d] (Expected: [1, 2])\n", res2[0], res2[1]);
    free(res2);

    return 0;
}