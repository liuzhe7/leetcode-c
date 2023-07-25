//https://leetcode.cn/problems/zai-pai-xu-shu-zu-zhong-cha-zhao-shu-zi-lcof/

int search(int* nums, int numsSize, int target){
  if (numsSize == 0) {
    return 0;
  }
  int min = 0;
  int max = numsSize - 1;
  int targetIndex = 0;
  for (; min <= max;)
  {
    int mid = min + ((max - min) >> 1);

    if (target == nums[mid]) {
      targetIndex = mid;
      break;
    } else if (nums[mid] > target) {
      max = mid - 1;
    } else {
      min = mid + 1;
    }
  }
  int times = 0;
  for (int leftSearch = targetIndex; leftSearch >= 0; leftSearch--)
  {
    if (nums[leftSearch] == target) {
      times++;
    }
  }
  for (int rightSearch = (targetIndex + 1); rightSearch < numsSize; rightSearch++)
  {
    if (nums[rightSearch] == target) {
      times++;
    }
  }
  return times;
}