int removeElement(int* nums, int numsSize, int val) {
    int k = 0; // Pointer for the next position of a valid element

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != val) {
            nums[k] = nums[i];
            k++;
        }
    }

    return k;
}