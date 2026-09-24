//Given two sorted arrays nums1 and nums2 of size m and n respectively, return the median of the two sorted arrays.

 #include <stdio.h>

double findMedianSortedArrays(int nums1[], int m, int nums2[], int n) {
    int i=0, j=0, count=0;
    int mergedSize = m+n;
    int mid1 = (mergedSize-1)/2, mid2 = mergedSize/2;
    int a=-1, b=-1;

    while (count <= mid2) {
        int val;
        if (i < m && (j >= n || nums1[i] <= nums2[j])) {
            val = nums1[i++];
        } else {
            val = nums2[j++];
        }
        if (count == mid1) a = val;
        if (count == mid2) b = val;
        count++;
    }
    if (mergedSize % 2 == 0) return (a+b)/2.0;
    else return b;
}

int main() {
    int nums1[] = {1, 3};
    int nums2[] = {2};
    int m = sizeof(nums1)/sizeof(nums1[0]);
    int n = sizeof(nums2)/sizeof(nums2[0]);

    printf("Median = %.1f\n", findMedianSortedArrays(nums1, m, nums2, n));
    return 0;
}
