#include <stdio.h>

int main(void)
{
  /* 정수형 변수
  int age = 12; // int로 변수 설정
  printf("%d\n",age); // 12
  // 변수 앞에 "%d\n"가 안들어가면 오류가 난다. %d 는 정수형 값을 출력하라는 의미
  age = 15;
  printf("%d\n",age); // 15
  */

  /* 실수형 변수
  float f = 46.5f; // float으로 변수 설정
  // 숫자 뒤에 꼭 f 붙여주기
  printf("%.2f\n",f); // 46.50
  // %f 는 실수형 값을 출력하라는 의미, f 앞의 0.2는 소수점 몇자리수까지 출력할 지

  double d = 4.428;
  printf("%.2lf\n",d); // 4.43 띠용 자동으로 반올림이 됨
  // double 로 변수 설정을 했을 경우에는 %lf
  */

  /* 상수
  const int YEAR = 2000;
  printf("태어난 년도:%d\n",YEAR); // 태어난 년도:2000
  // YEAR = 2001; 바꾸지 못한다.
  */

  /* printf 연산
  int add = 3+7; // 10
  printf("3 + 7 = %d\n",add); // 3 + 7 = 10

  printf("%.2f - %d = %.2f\n",11.76,22,11.76-22); // 11.76 - 22 = -10.24

  printf("%d * %d = %d\n", 10,7,10*7); // 10 * 7 = 70
  // %d는 정수형 값을 받는다. 쉼표 뒤에 정수형 값을 %d에 넣어주면 된다. 

  printf("%d / %.1f = %.0f\n", 10,2.5,10/2.5); // 10 * 7 = 70
  // 정수를 실수로 나눠서 정수 몫이 나와도 몫은 실수형이 된다
  */

  /* scanf 키보드 입력을 받아 저장
  int input;
  printf("값을 입력하세요 :");
  scanf("%d", &input); 
  printf("입력값 : %d\n",input); // 입력값 : (입력값) 
  // %d(정수값)을 사용했기 때문에 3.6을 입력해도 정수값인 3만 input의 값으로 들어간다.
  
  int one,two,three ;
  printf("3개의 정수를 입력하세요 :"); // 1 2 3
  scanf("%d %d %d",&one,&two,&three);
  printf("첫번째 값: %d\n",one); // 첫번째 값: 1 
  printf("두번째 값: %d\n",two); // 두번째 값: 2 
  printf("세번째 값: %d\n",three); // 세번째 값: 3 
  */

  /* 문자(한 글자), 문자열(두 글자 이상의 여러글자)
  char a = 'A'; // 문자는 홑따옴표로 
  printf("%c\n",a); // A
  // %c 문자 입력

  char arr[256]; // 256개가 들어가는 배열 생성
  scanf("%s",arr,sizeof(arr)); // 배열은 & 표시 생략 대신 뒤에 sizeof로 크기를 명시해줘야 한다. 256개 이상의 문자 들어오면 이상이 생기기 때문이다.
  printf("%s\n", arr);
  */

  // 조서 작성

  char name[256],crime[256];
  int age;
  double height,weight;

  printf("이름\n");
  scanf("%s",name); // ,sizeof(name) vscode에서 오류남
  printf("나이\n");
  scanf("%d",&age);
  printf("키\n");
  scanf("%lf",&height);
  printf("몸무게\n");
  scanf("%lf",&weight);
  printf("범죄명\n"); // ,sizeof(crime) vscode에서 오류남
  scanf("%s",crime);
  printf("\n\n --범죄자정보--\n\n이름     : %s\n나이     : %d\n키       : %.1lf\n몸무게   : %.1lf\n범죄이력 : %s",name,age,height,weight,crime);

  return 0;  
}