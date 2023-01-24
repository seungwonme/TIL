#include <stdio.h>

int main(void)
{
  // 정수와 실수
  /* int subway_array[3];  // [몇 개의 정수를 보관할 것인가] 배열 생성
  subway_array[0] = 30; // index 0 값 js와 동일하게 0부터 시작한다.
  subway_array[1] = 40;
  subway_array[2] = 50;
  for (int i = 0; i < 3; i++)
    printf("지하철 %d호차에 %d명이 타고 있습니다.\n", i + 1, subway_array[i]); */

  /* // 값 설정
  int arr[10] = {1,2,3,4,5,6,7,8,9,10};
  for (int i = 0; i < 10; i++)
    printf("%d\n", arr[i]); */

  /* int arr[10]; // 만약 배열 안의 값을 선언하지 않았다면 더미데이터가 나온다.
  for (int i = 0; i < 10; i++)
    printf("%d\n", arr[i]);

  int arr[10] = {1, 2}; // 배열 안의 값을 하나라도 선언했다면 그 다음의 값은 0으로 나온다.
  for (int i = 0; i < 10; i++)
    printf("%d\n", arr[i]); */

  /* // []안에 상수만 들어갈 수 있다.
  int size =10;
  int array[size] = {1,2,3,4};

  int array[] = {1, 2}; // array[2]와 동일해서 index 2부터 더미데이터가 나온다.
  for (int i = 0; i < 10; i++)
    printf("%d\n", array[i]);

  float arr_f[5] = {1.1f,2.2f,3.3f};
  for (int i = 0; i < 5; i++) printf("%.2f\n",arr_f[i]); */

  // 문자 문자열
  /* char c = 'A';
  printf("%c %lu\n",c,sizeof(c));
  char str[7] = "coding"; // [c][o][d][i][n][g][\0]
  // 문자열 끝에는 끝을 의미하는 NULL 문자가 포함되어야함 \0을 써줘도 되고 안써도 공간아 남으면 자동으로 \0 값이 들어감
  printf("%s\n",str);  
  char str[] = "coding";
  printf("%lu\n",sizeof(str)); // 6글자 + 끝을 의미하는 \0까지 총 7글자 

   char kor[] = "나도코딩";
  // 영어 한 글자 : 1 byte
  // 한글 한 글자 : 3 byte UTF-8기준
  printf("%lu\n",sizeof(kor)); // 13 4x3+1 

  char c_array[7] = {'c','o','d','i','n','g','\0'}; // 문자열 = 문자의 배열과 같다.
  printf("%s\n",c_array); 

  char str[] = "coding";
  for (int i = 0; i < sizeof(str); i++)
  {
    printf("%d\n",str[i]); // ASCII (NULL 문자 \0은 0)
  } */
  
  for(int i=0;i<128;i++)
  {
    printf("아스키코드 %d번은 %c\n",i,i);
  }
  if (-1 == remove("array"))
  if(-1==remove("array"))
  return 0;
}