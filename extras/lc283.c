void moveZeroes(int* nums, int numsSize) {
    int i = 0; int p = numsSize - 1;
    while(i<p){
        if(nums[i] == 0){
            for(int n = i; n<p; n++){
                nums[n] = nums[n+1];
            }
            nums[p] = 0; p--;
        } else i++;
    }
}