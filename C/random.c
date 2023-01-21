#include <time.h> // rand를 사용하기 위해서
#include <stdlib.h> // rand를 사용하기 위해서
#include <stdio.h>

int main(void)
{ 
  // rand() % 3 + 1;  1 ~ 3
  // 기본은 0부터 시작인데 더한 값 만큼 시작하는 값이 올라간다.

  printf("난수 초기화 이전\n");
  for (int i = 0; i < 10; i++) printf("%d",rand() % 10); // 7938024839 같은 값 반복

  srand(time(NULL)); // 난수 초기화
  printf("\n난수 초기화 이후\n");
  for (int i = 0; i < 10; i++) printf("%d",rand() % 10); // 매번 다름
  return 0;
}