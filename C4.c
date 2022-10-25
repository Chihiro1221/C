#include <stdio.h>

// 将月份转换为天数
static void translateMonthtoDay(int month, int *sum) {
  switch (month) {
  case 1:
    break;
  case 2:
    *sum += 31;
    break;
  case 3:
    *sum += 59;
    break;
  case 4:
    *sum += 90;
    break;
  case 5:
    *sum += 120;
    break;
  case 6:
    *sum += 151;
    break;
  case 7:
    *sum += 181;
    break;
  case 8:
    *sum += 213;
    break;
  case 9:
    *sum += 244;
    break;
  case 10:
    *sum += 274;
    break;
  case 11:
    *sum += 305;
    break;
  case 12:
    *sum += 335;
    break;
  default:
    printf("error data\n");
  }
}

int main() {
  int year, month, day;
  int sum = 0;

  printf("Please successively enter year, month and day and to use \"-\" "
         "joining:\n");
  scanf("%d-%d-%d", &year, &month, &day);

  translateMonthtoDay(month, &sum);

  sum += day;
  // 如果是闰年并且过了2月份则加一天
  if ((year % 400 == 0 || (year % 100 != 0 && year % 4 == 0)) && month >= 3) {
    sum++;
  }
  printf("The number of days is %d\n", sum);
  return 0;
}
