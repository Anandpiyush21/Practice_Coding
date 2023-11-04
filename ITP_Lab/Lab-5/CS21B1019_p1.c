#include <stdio.h>

int searchInsert(int* nums, int numsSize, int target) {
    int left = 0, right = numsSize - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (nums[mid] == target) {
            return mid;
        } else if (nums[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return left; 
}

int main() {
    int n;
    scanf("%d",&n);
    int arr[n];


    int target = 5;
    int result = searchInsert(nums, numsSize, target);
    printf("%d\n", result); // Output: 2
    return 0;
}
