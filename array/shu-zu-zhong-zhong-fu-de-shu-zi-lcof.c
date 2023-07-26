//https://leetcode.cn/problems/shu-zu-zhong-zhong-fu-de-shu-zi-lcof/
#include <stdlib.h>

int findRepeatNumber(int* nums, int numsSize){
  int *recorder = (int*) calloc(numsSize, sizeof(int)); 
  for (int i = 0; i < numsSize;i ++) {
    if (recorder[nums[i]] == 1) {
      free(recorder);
      return nums[i];
    }
    recorder[nums[i]] = 1;
  }
  free(recorder);
  return -1;
}
