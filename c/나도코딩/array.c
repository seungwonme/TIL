#include <stdio.h>

int main(void)
{
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
    printf("%d\n", arr[i]); */

  int arr[10] = {1, 2}; // 배열 안의 값을 하나라도 선언했다면 그 다음의 값은 0으로 나온다.
  for (int i = 0; i < 10; i++)
    printf("%d\n", arr[i]);

  /* // []안에 상수만 들어갈 수 있다.
  int size =10;
  int array[size] = {1,2,3,4}; */

  int array[] = {1, 2}; // array[2]와 동일
  for (int i = 0; i < 10; i++)
    printf("%d\n", array[i]);

  if (-1 == remove("array"))
  return 0;
}