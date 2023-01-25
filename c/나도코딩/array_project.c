#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
  srand(time(NULL));
  int answer, i,j,k;
  int treatment = rand() % 4;

  int cntShowBottle = 0;
  int prevCntShowBottle = 0;
  for (i = 0; i < 3; i++)
  {
    int bottle[4] = {0, 0, 0, 0};
    do {
      cntShowBottle = rand() % 2 + 2;
    } while (cntShowBottle == prevCntShowBottle);
    prevCntShowBottle = cntShowBottle;
    int isInclude = 0;
    printf("%d번째 시도\n",i+1);
    for(j=0;j<cntShowBottle;j++)
    {
      int randBottle = rand() %4;
      if (bottle[randBottle] == 0) {
        bottle[randBottle] = 1;
        if (randBottle == treatment) isInclude = 1;
      } else j --;
    }
    for (k = 0; k < 4; k++) {
      if(bottle[k] == 1) printf("%d번 ",k+1);
    }
    printf("물약을 머리에 바릅니다.\n\n");
    if(isInclude == 1) printf(">>  성공! 머리가 자랐어요.\n");
    else printf(">>  실패\n");
    getchar(); // 아무 거나 입력할 때까지 대기
  }
  printf("발모제는 몇번일까요?\n");
  scanf("%d",&answer);
  if(answer == treatment +1) printf("정답입니다 !\n");
  else printf("틀렸습니다. 정답은 %d번입니다.\n",treatment+1);
  if(-1==remove("array_project"))
  return 0;
}