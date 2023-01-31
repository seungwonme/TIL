#include <stdio.h>

void draw(int h);

int main(void)
{
  int height;
  printf("Height : ");
  scanf("%d", &height);

  draw(height);

  if(-1 == remove("recursion"))
  return 0;
}

void draw(int h)
{
  if(h==0) return;

  draw(h-1);
  
  for (int i = 0; i < h; i++)
  {
    printf("#");
  }
  printf("\n");
}