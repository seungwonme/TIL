#include <stdio.h>

// 함수 선언 (main 함수 위에서)
void p(int n); // p라는 이름의 반환값이 없고 n이라는 매개변수를 지닌 함수를 선언

/* void function_without_return();
int function_with_return();

void  function_without_params();
void  function_with_params(int num1,int num2,int num3); */

int add(int x, int y);
int min(int x, int y);
int multi(int x, int y);
int div(int x, int y);

int main(void) // main이라는 이름의 정수형 자료를 반환하고 매개변수가 없는 함수
{
  /* // 함수로 표현하기 전
  int num = 13;
  num += 1;
  p(num);
  num -= 2;
  p(num);
  num *= 5;
  p(num);
  num /= 6;
  p(num); */

  /* // 반환값이 없는 함수
  function_without_return();
  // 반환값이 있는 함수
  int ret = function_with_return();
  p(ret);
  // 매개변수(파라미터)가 없는 함수
  function_without_params();
  // 매개변수가 있는 함수
  function_with_params(23,344,45);
  // 매개변수와 반환값이 있는 함수
  int ret1 = multi(23,46);
  printf("%d를 전달받았습니다. 별개로 11 x 12 = %d 입니다.\n",ret1,multi(11,12));  */

  // 함수로 표현하기
  int num = 13;
  num = add(num, 1);
  p(num);
  num = min(num, 2);
  p(num);
  num = multi(num, 5);
  p(num);
  num = div(num, 6);
  p(num);
  if(-1==remove("function"))
  return 0; // 반환값이 없으므로 0을 넣은 거임
}

// 함수 정의 (main 함수 아래에서)
void p(int n)
{
  printf("num은 %d입니다.\n", n);
}

/* void function_without_return()
{
  printf("반환값이 없는 함수입니다.\n");
}
int function_with_return()
{
  printf("반환값이 있는 함수입니다.\n ");
  return 10;
}

void  function_without_params()
{
  printf("매개변수가 없는 함수입니다\n");
}
void  function_with_params(int num1,int num2,int num3)
{
  printf("%d %d %d 매개변수가 있는 함수입니다\n",num1,num2,num3);
} */

int add(int x, int y)
{
  printf("%d + %d = %d\n", x, y, x + y);
  return x + y;
}
int min(int x, int y)
{
  printf("%d - %d = %d\n", x, y, x - y);
  return x - y;
}
int multi(int x, int y)
{
  printf("%d x %d = %d\n", x, y, x * y);
  return x * y;
}
int div(int x, int y)
{
  printf("%d / %d = %d\n", x, y, x / y);
  return x / y;
}