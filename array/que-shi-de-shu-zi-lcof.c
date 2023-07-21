int missingNumber(int* nums, int numsSize){
  if (nums[0] == 1) {
    return 0;
  }
  for (int i = 1; i < numsSize; i ++) {
    if (nums[i] != nums[i-1] + 1) {
      return nums[i - 1] + 1;
    }
  }
  return nums[numsSize - 1] + 1;
}