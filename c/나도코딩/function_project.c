#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int add(int x, int y);
int min(int x, int y);
int multi(int x, int y);
int divi(int x, int y);

int user;

int main(void)
{
  srand(time(NULL));
  
  int a = add(rand() % 7 + 1,rand() % 5 + 1);
  scanf("%d",&user);
  if(user != a) 
  {
    printf("틀렸다.\n");
    return 0;
  }

  int b = min(rand() % 30 + 1,rand() % 40 + 1);
  scanf("%d",&user);
  if(user != b) 
  {
    printf("틀렸다.\n");
    return 0;
  }

  int c = multi(rand() % 40 + 1,rand() % 60 + 1);
  scanf("%d",&user);
  if(user != c) 
  {
    printf("틀렸다.\n");
    return 0;
  }

  int d = divi(rand() % 300 + 1,rand() % 50 + 1);
  scanf("%d",&user);
  if(user != d) 
  {
    printf("틀렸다.\n");
    return 0;
  }
  printf("예에~ 성공이다 !!\n");
 
  return 0;
}

int add(int x, int y)
{
  printf("%d + %d = ",x,y);
  return x+y;
}
int min(int x, int y)
{
  printf("%d - %d = ",x,y);
  return x-y;
}
int multi(int x, int y)
{
  printf("%d * %d = ",x,y);
  return x*y;
}
int divi(int x, int y)
{
  printf("%d / %d = ",x,y);
  return x/y;
}