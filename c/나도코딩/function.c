#include <stdio.h>

// void로 p라는 이름을 가지고 num이라는 매개변수를 지닌 함수를 선언

// dd 행 삭제 / u unde / yy 행복사 // p 붙여넣기
// v visual모드 / y copy / d cut / p / paste
// * 같은 단어로 이동 / w 단어 첫 글자로 이동 / W 스페이스 단위로 다음 글자 이동 / e  단어의 마지막으로 이동
// gg 문서 맨 앞으로 이동 / G  문서의 맨 뒤로 이동 / $ 문장 맨 뒤로 이동 / ^ 문장 맨 앞으로 이동  

void p(int num);

int main(void)
{
  int num = 13;
  num += 1;
  p(num);
  num -= 2;
  p(num);
  num *= 5;
  p(num);
  num /= 6;
  p(num);

  return 0;
}
void p(int num) 
{
  printf("num은 %d입니다.\n",num);
}
