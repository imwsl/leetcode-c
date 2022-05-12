#include <stdio.h>
#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int *returnSize) {
    int idx_i = 0;
    int idx_j = 0;
    int is_find = 0;

    for (int i = 0; i < numsSize; i ++) {
        int temp = target - nums[i];
        
        is_find = 0;
        for (int j = 0; j < numsSize && j != i; j ++) {
            if (temp == nums[j]) {
                is_find = 1;
                idx_i = i < j ? i : j; 
                idx_j = i < j ? j : i;
                break;
            }
        }

        if (is_find == 1) break;
    }

    int* ret_array = (int *)malloc(sizeof(int) * 2);
    *returnSize = 2;
    ret_array[0] = idx_i;
    ret_array[1] = idx_j;
    return ret_array;
}

int main() {
    int nums[4] = {2, 7, 11, 15};
    int target = 9;
    int returnSize = 0;

    int* ret_array = twoSum(nums, 4, target, &returnSize);
    printf("returnSize %d\n", returnSize);
    printf("%d\n", ret_array[0]);
    printf("%d\n", ret_array[1]);
    return 0;
}
