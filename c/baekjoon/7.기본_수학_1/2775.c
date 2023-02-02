#include <stdio.h>

int main(void)
{
  int t;
  scanf("%d",&t);
  for (int i = 0; i < t; i++)
  {
    int k,n,num,sum=0;
    scanf("%d\n%d",&k,&n);
    for (int j = 0; j <= k; j++)
    {
      num = 0;
      for (int l = 1; l <= n; l++)
      {
        num += l;
      }
      sum += num;
    }
  }
  
  return 0;
}
// floor 3: 1 5 15 35 70 126 210 
// floor 2: 1 4 10 20 35 56  84 
// floor 1: 1 3 6  10 15 21  28 
// floor 0: 1 2 3  4  5  6   7 ,,
// n 1: 1
// n 2: +1
// n 3: +3