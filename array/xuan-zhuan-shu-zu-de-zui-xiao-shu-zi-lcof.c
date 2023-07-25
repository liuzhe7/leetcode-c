//https://leetcode.cn/problems/xuan-zhuan-shu-zu-de-zui-xiao-shu-zi-lcof/

int minArray(int* numbers, int numbersSize){
  int min = 0;
  int max = numbersSize -1;
  int mid;
  for (;max > min;)
  {
    mid = min + ((max - min) >> 1);
    if ( numbers[mid] > numbers[max]) {
      min = mid + 1;
    } else if (numbers[mid] < numbers[max]) {
      max = mid;
    } else if (numbers[mid] == numbers[max]) {
      max--;
    }
  }
  return numbers[min];
}
