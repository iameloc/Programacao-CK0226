void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    if(m == 0){
        nums1 = nums2;
        return;
    }
    if(n == 0) return;
    int i = 0, j = 0, p = m;
    
    while(i < m+n && i < p){
        if(nums1[i] <= nums2[j]) i++;
        else{
            for(int k = p; k>i; k--){
                nums1[k] = nums1[k-1];
            } 
            nums1[i] = nums2[j];
            p++; j++;
        }
        printf("%d \n", j);
        printf(" l1 end \n");
    }

    while(j < n){
        nums1[p] = nums2[j]; j++;
        printf("%d \n", j);
    }
}