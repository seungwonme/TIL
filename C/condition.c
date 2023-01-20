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

  /* // && ||
  */

  return 0;
}