#include <stdio.h>

int main(void)
{
  char *a;
  char *b;

  printf("a : ");
  scanf("%s",a);
  printf("b : ");
  scanf("%s",b);
  printf("a : %s\nb : %s",a,b);
  if (a == b)
  {
    printf("same\n");
  }
  else printf("diffrent\n");
  return 0;
}