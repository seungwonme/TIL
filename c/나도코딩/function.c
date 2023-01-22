#include <stdio.h>

// void로 p라는 이름을 가지고 num이라는 매개변수를 지닌 함수를 선언

void p(int num);

int main(void)
{
  int num = 13;
  num += 1;
  p(num);
  num -= 2;
  p(num);
  num *= 5;
  p(num);
  num /= 6;
  p(num);

  return 0;
}
void p(int num)
{
  printf("num은 %d입니다.\n", num);
}
