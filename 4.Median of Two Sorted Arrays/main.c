#include <stdio.h>
#include <stdbool.h>

bool is_odd(int num) {
  if (num % 2 == 0) return true;
  return false;
}

int find_min_

double find_odd_median_num(int* nums1, int nums1Size, int* nums2, int nums2Size) {

}

double find_even_median_num(int* nums1, int nums1Size, int* nums2, int nums2Size) {}

double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
  if (true == is_odd(nums1Size + nums2Size)) {

    return find_odd_median_num(nums1, nums1Size, nums2, nums2Size);
  } else {

    return find_even_median_num(nums1, nums1Size, nums2, nums2Size);
  }
}

int main() {

  return 0;
}
