#include <limits.h>

double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    if (nums1Size > nums2Size) {
        return findMedianSortedArrays(nums2, nums2Size, nums1, nums1Size);
    }

    int total = nums1Size + nums2Size;
    int half = (total + 1) / 2;

    int left = 0;
    int right = nums1Size;

    while (left <= right) {
        int mid1 = (left + right) / 2;
        int mid2 = half - mid1;

        int maxLeft1 = (mid1 == 0) ? INT_MIN : nums1[mid1 - 1];
        int minRight1 = (mid1 == nums1Size) ? INT_MAX : nums1[mid1];
        int maxLeft2 = (mid2 == 0) ? INT_MIN : nums2[mid2 - 1];
        int minRight2 = (mid2 == nums2Size) ? INT_MAX : nums2[mid2];

        if (maxLeft1 <= minRight2 && maxLeft2 <= minRight1) {
            if (total % 2 == 0) {
                return (double)(fmax(maxLeft1, maxLeft2) + fmin(minRight1, minRight2)) / 2.0;
            } else {
                return (double)fmax(maxLeft1, maxLeft2);
            }
        } else if (maxLeft1 > minRight2) {
            right = mid1 - 1;
        } else {
            left = mid1 + 1;
        }
    }
    return 0.0;
}
