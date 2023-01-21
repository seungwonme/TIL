#include <time.h>   // rand를 사용하기 위해서
#include <stdlib.h> // rand를 사용하기 위해서
#include <stdio.h>

int main(void)
{
  /* // if else
  int age;
  printf("나이를 입력해주세요.\n");
  scanf("%d", &age);
  if (age >= 20 && age <= 120) // js랑 똑같다.
  {
    printf("당신은 %d살이므로 성인입니다.", age);
  }
  else if (age >= 17 && age < 20)
  {
    printf("당신은 %d살이므로 고등학생입니다.", age);
  }
  else if (age >= 14 && age < 17)
  {
    printf("당신은 %d살이므로 중학생입니다.", age);
  }
  else if (age >= 8 && age < 14)
  {
    printf("당신은 %d살이므로 초등학생입니다.", age);
  }
  else if (age > 0 && age < 8)
  {
    printf("당신은 %d살이므로 어린이입니다.", age);
  }
  else
  {
    printf("정상적인 입력값이 아닙니다.");
  } */

  /* // break continue
  for (int i = 1; i <= 30; i++)
  {
    printf("%d번 학생 발표준비하세요.\n", i);
    if (i >= 5)
    {
      printf("나머지 학생들은 집에 가세요.");
      break; // 만나면 반복문을 끝낸다.
    }
  }

  for (int i = 1; i <= 30; i++)
  {
    // js와 똑같이 조건문 안에 코드가 한줄이면 중괄호 생략도 가능하다
    if (i >= 6 && i <= 10)
    {
      if (i == 7)
      {
        printf("%d번 학생은 아파서 결석입니다.\n", i);
        continue; // break과 달리 만나면 아래코드를 실행하지 않고 다음 순서로 넘어간다.
        // 만약 continue가 여기에 쓰지지 않았다면 7번 학생에 대해 중복으로 말하게 된다.
      }
      printf("%d번 학생 발표준비하세요.\n", i);
    }
    else if (i > 10)
    {
      printf("나머지 학생들은 집에 가세요.");
      break;
    }
  } */

  // && || js와 동일하고 예제도 간단하므로 패스

  /* // 가위 2 바위 0 보 1
  srand(time(NULL));
  int randRsp = rand() % 3;
  int user;
  scanf("%d", &user);
  if (randRsp == user)
    printf("컴퓨터는 %d을 냈고 당신은 %d을 내서 비겼습니다.", randRsp, user);
  else
  {
    if (user == 2 && randRsp == 1 || user == 0 && randRsp == 2 || user == 1 && randRsp == 0)
      printf("컴퓨터는 %d을 냈고 당신은 %d을 내서 당신이 이겼습니다.", randRsp, user);
    else
      printf("컴퓨터는 %d을 냈고 당신은 %d을 내서 당신이 졌습니다.", randRsp, user);
  } */

  /* // switch
  srand(time(NULL));
  int i = rand() % 3;
  switch (i)
  {
  case 0: printf("가위\n"); break; // js와 똑같이 case에 해당되면 밑의 줄도 모두 반환한다.
  // 밑의 줄이 반환되는 것이 싫다면 각 조건마다 break을 붙여줘야한다. 이 때, break 문 앞의 줄에 ; 붙여줘야한다.
  case 1: printf("바위\n"); break;
  case 2: printf("보\n"); break;
  default: printf("몰라요.\n");
  }
  return 0; */

  // 업다운
  srand(time(NULL));
  int limit, answer;
  printf("1부터 몇까지?\n");
  scanf("%d",&limit);
  int num = rand() % limit + 1;
  printf("맞춰보세요. (1~%d)\n",limit);
  scanf("%d",&answer);

  int cnt = 1;
  while (answer != num)
  {
    if(answer > num) printf("%d보다 작습니다. ",answer);
    else if(answer < num) printf("%d보다 큽니다. ",answer);
    printf("맞춰보세요. (1~%d)\n",limit);
    scanf("%d",&answer);
    cnt ++;
  }
  printf("%d번만에 맞췄습니다.\n",cnt);

  return 0;
}