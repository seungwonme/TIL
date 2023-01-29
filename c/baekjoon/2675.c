#include <stdio.h>

int main(void)
{
  int r;
  scanf("%d",&r);
  char s[20], p[20*r];
  scanf("%s",s);
  int i = 0;
  int idx = 0;
  while (s[i])
  {
    for (int j = 0; j < r; j++)
    {
      p[idx] = s[i];
      idx ++;
    }
    i ++;
  }
  p[idx] = '\0';
  printf("%s\n",p);
  return 0;
}

// 틀림 ....