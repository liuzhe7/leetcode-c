// https://leetcode.cn/problems/di-yi-ge-zhi-chu-xian-yi-ci-de-zi-fu-lcof/

#include <string.h>

char firstUniqChar(char* s){
  int lenS = strlen(s);
  int hashMap[256] = {}; // the total number of char is 256
  for (int index = 0;index < lenS;index ++) {
    hashMap[(int)s[index]] ++;
  }
  for (int index = 0;index < lenS;index ++) {
    if (hashMap[(int)s[index]] == 1) {
      return s[index];
    }
  }
  return ' ';
}