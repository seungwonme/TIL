#include <stdio.h>

int main(void)
{
  int a,b,v,days;
  scanf("%d %d %d",&a,&b,&v);
  days = v/(a-b); // v/a - v/(b-1)+v
  if (v <= days +b) // 전날
  {
    printf("%d",days);
  }
  printf("%d\n",days-1);
  return 0;
}

/* 
4 2 6 -> 2
4 2 7 -> 3
*/
// 고려할 내용: 실수 나누기, 전날에 충분히 올라갈 수 있었는 지