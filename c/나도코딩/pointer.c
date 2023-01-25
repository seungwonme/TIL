#include <stdio.h>

void swap(int a, int b);
void swap_addr(int * a, int * b);
void changeArr(int * ptr);
// joey ross chandler
int main(void)
{
  /* int monica = 1;
  int rachel = 2;
  int phoebe = 3;
  printf("monica live in %p, password is %d\n",&monica,monica); // &변수명으로 변수명으로 된 메모리 주소를 담는다.
  printf("rachel live in %p, password is %d\n",&rachel,rachel);
  printf("phoebe live in %p, password is %d\n",&phoebe,phoebe);

  // misson 1 : 집에 찾아가서 암호 확인
  int * missonMan = &monica; // 포인터 변수 missonMan에는 monica의 주소가 담긴다.
  printf("misson man visit %p, password is %d\n",missonMan,*missonMan);
  missonMan = &rachel;
  printf("misson man visit %p, password is %d\n",missonMan,*missonMan);
  missonMan = &phoebe;
  printf("misson man visit %p, password is %d\n",missonMan,*missonMan);

  // mission 2 : 각 암호에 3을 곱하라
  missonMan = &monica;
  *missonMan *= 3; // *missonMan은 monica의 값을 가지고 missonMan은 monica의 메모리 주소를 가진다.
  printf("adress %p, pw %d\n",missonMan,*missonMan);
  missonMan = &rachel;
  *missonMan *= 3;
  printf("adress %p, pw %d\n",missonMan,*missonMan);
  missonMan = &phoebe;
  *missonMan *= 3;
  printf("adress %p, pw %d\n",missonMan,*missonMan);

  printf("%d",monica); // *missonMan에 3을 곱했더니 monica도 3이 곱해졌다.

  // spy 미션맨이 바꾼 암호에서 2를 빼라
  int * spy = missonMan;
  printf("\n스파이가 미션 수행하는 중..\n\n");
  spy = &monica;
  *spy -= 2;
  printf("adress %p, pw %d\n",spy,*spy);
  spy = &rachel;
  *spy -= 2;
  printf("adress %p, pw %d\n",spy,*spy);
  spy = &phoebe;
  *spy -= 2;
  printf("adress %p, pw %d\n",spy,*spy);

  printf("monica live in %p, password is %d\n",&monica,monica);
  printf("rachel live in %p, password is %d\n",&rachel,rachel);
  printf("phoebe live in %p, password is %d\n",&phoebe,phoebe);

  // 참고 missonMan의 주소는 &missonMan으로 확인
  printf("missonMan live in %p\n",&missonMan);
  printf("spy live in %p\n",&spy); */

  /* // 배열과 포인터
  int arr[3] = {5,10,15};
  int * ptr = arr;
  for(int i=0;i<3;i++) printf("배열 arr[%d] == %d\n", i,arr[i]);
  for(int i=0;i<3;i++) printf("포인터 ptr[%d] == %d\n", i,ptr[i]); // ptr == arr 같은 값을 참조
  ptr[0] = 100;
  ptr[1] = 200;
  ptr[2] = 300;
  for(int i=0;i<3;i++) printf("배열 arr[%d] == %d\n", i,*(arr + i));  // *(arr + i) == arr[i]
  for(int i=0;i<3;i++) printf("포인터 ptr[%d] == %d\n", i,*(ptr + i));

  // arr의 자체의 값(할당된 메모리 주소) == %arr[0]
  printf("arr 자체의 값 : %p\n",arr);
  printf("arr[0]의 메모리 주소 : %p\n",&arr[0]);
  printf("arr의 실제값 : %d\n",*arr); // = *(arr + 0) == 100 == arr[0]

  // &은 주소를, *는 주소의 값을 나타내기 때문에 *&은 아무 것도 안쓴 것과 같다.
  printf("arr의 실제값 : %d\n",*&*&*&*&*&arr[0]); */

  /* // SWAP
  int a = 10;
  int b = 20;
  printf("a adr : %p\n",&a);
  printf("b adr : %p\n",&b);

  printf("SWAP 함수 전 a = %d, b = %d\n", a, b);
  swap(a, b);
  printf("SWAP 함수 후 a = %d, b = %d\n", a, b);

  // 값이 아닌 주소를 갖고 온다면 ?
  printf("(메모리 주소 전달)SWAP 함수 전 a = %d, b = %d\n", a, b);
  swap_addr(&a, &b);
  printf("(메모리 주소 전달)SWAP 함수 후 a = %d, b = %d\n", a, b); */

  int arr2[3] = {10,20,30};
  // changeArr(arr2);
  changeArr(&arr2[0]); // arr2 == &arr2[0]
  for(int i =0;i<3;i++) printf("%d\n",arr2[i]);

  if (-1 == remove("pointer"))
  return 0;
}

void swap(int a, int b)
{
  printf("a 값 b 값\n");
  printf("a adr : %p\n",&a); // a를 갖고 온 것이 아닌 값만 갖고 옴
  printf("b adr : %p\n",&b);
  int temp = a;
  a = b;
  b = temp;
  printf("SWAP 함수 안 a = %d, b = %d\n", a, b);
}

void swap_addr(int * a, int * b)
{
  printf("a 주소, b 주소\n");
  printf("a adr : %p\n",a);
  printf("b adr : %p\n",b);
  int temp = *a;
  *a = *b;
  *b = temp;
  // printf("SWAP 함수 안 a = %d, b = %d\n", a, b);
}
void changeArr(int * ptr)
{
  ptr[2] = 50;
}