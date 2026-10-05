int removeDuplicates(int* nums, int numsSize) {
    if(numsSize == 0) return 0;
    int i = 0; int p = numsSize - 1;

    while(i < p){
        if(nums[i] == nums[i+1]){
            for(int n = i; n<p; n++){
                nums[n] = nums[n+1];
            }
            p--;
        } else i++;
    }

    return p + 1;
}

