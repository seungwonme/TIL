#include <stdio.h>

int main(void)
{
  /* // ++
  int a = 10;
  printf("%d\n",++a); // 11 이 행에서 +1
  printf("%d\n",a); // 11
  printf("%d\n",a++); // 11 이 행이 끝나고 +1
  printf("%d\n",a); // 12
  */

  /* // 반복문
  // for
  for (int i=1;i<=10;i++) {
    printf("js네 그냥 ㅋㅋ %d\n",i);
  }

  // while
  int i = 1;
  while (i<=10) {
    printf("while문도 js랑 똑같다 대박x%d\n",i++);
  }

  // do while
  int i = 1;
  do {
    printf("do while도 js랑 똑같네? ㅋㅋ 대박x%d\n",i++);
  } while (i<=10);
  */

  /* // 2중 반복문
  // 별만들기
  for (int i=1;i<=10;i++){
    for (int j=1;j<=i;j++){
      printf("*");
    }
    printf("\n");
  }

  // 직각 삼각형 만들기
  for (int i = 1; i <= 10; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      printf(" ");
    }
    for (int k = 10-i; k >= 1; k--)
    {
      printf("*");
    }
    printf("\n");
  }

  // 구구단 만들기
  for(int i=2;i<=9;i++){
    printf("%d단 시작 !\n",i);
    for(int j=1;j<=9;j++){
      printf("    %d x %d = %d\n",i,j,i*j);
    }
    printf("%d단 끝 !\n",i);
    printf("\n");
  }
  */

  // 피라미드 쌓기

  int floor;
  printf("몇 층까지?\n");
  scanf("%d", &floor);
  for (int i = 1; i <= floor; i++)
  {
    for (int j = floor ; j > i; j--)
    {
      printf(" ");
    }
    for (int k = 1; k < i; k++)
    {
      printf("**");
    }
      printf("*\n");
  }
  if(-1==remove("loop"))
  return 0;
}