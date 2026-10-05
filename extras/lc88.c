void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    if(m == 0){
        for(int i = 0; i<n; i++){
            nums1[i] = nums2[i];
        }
        return;
    }
    if(n == 0) return;

    int i = 0, j = 0, p = m;
    
    while(i < m+n && j < n){
        if(nums1[i] <= nums2[j]) i++;
        else{
            for(int k = p; k>i; k--){
                nums1[k] = nums1[k-1];
            } 
            nums1[i] = nums2[j];
            p++; j++; i++;
        }
    }

    while(j < n){
        nums1[p] = nums2[j]; j++; p++;
    }
}