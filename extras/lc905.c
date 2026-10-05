/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortArrayByParity(int* nums, int numsSize, int* returnSize) {
    *returnSize = numsSize;
    if(numsSize == 0) return 0;

    int i = 0, j = numsSize-1;

    while(i<j){
        if (nums[i]%2!= 0 && nums[j]%2==0) {
            int temp = nums[i];
            nums[i] = nums[j];
            nums[j] = temp;
            i++; j--;
        }
        if (nums[i] % 2 == 0) i++;
        if (nums[j] % 2 != 0) j--;
    }

    int* ans = (int*)malloc(numsSize * sizeof(int));
    for (int k = 0; k < numsSize; k++) {
        ans[k] = nums[k];
    }

    return ans;
}
