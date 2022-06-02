#include <stdio.h>
#include <stdlib.h>

void swap(arr, )

int partion(int* arr, int left, int right) {
	int pivot = left;
	int index = pivot + 1;
	
	for (int i = index; i <= right; i++) {
		if (arr[i] < arr[pivot]) {
		}
	}
	return 0;
}

void quickSort(int* arr, int left, int right) {
	int index = partion(arr, left, right);
	quickSort(arr, left, index - 1);
	quickSort(arr, index + 1, right);
	
}

int* makeNewArray(int* nums1, int nums1Size, int* nums2, int nums2Size) {
	int* newArr = (int*)malloc(sizeof(int) * (nums1Size + nums2Size));
	
	for (int i = 0; i < nums1Size + nums2Size; i ++) {
		
		if (i < nums1Size) {
			newArr[i] = nums1[i];
		} else {
			newArr[i] = nums2[i - nums1Size];
		}
	}

	// quick sort...
	quickSort(newArr, 0, nums1Size + nums2Size - 1);

	return newArr;
}

double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {

}

int main() {

  return 0;
}
