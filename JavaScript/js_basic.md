## 엄격모드
스크립트 최상단에 

    "use strict"
을 씀으로써 현버전인 ECMAScript6에서 구버전인 ECMAScript5의 기능과 분리한다.

## automatic semicolon insertion

줄바꿈이 있다면 ;으로 해석한다.<br>
예외의 경우도 있기 때문에 항상 각 statement마다 ;을 넣어주기

<br>

## 변수와 상수
[var, let, const 정리글](https://velog.io/@bathingape/JavaScript-var-let-const-%EC%B0%A8%EC%9D%B4%EC%A0%90)

- 변수명은 최대한 자세히, 하지만 간결하게 
단어의 조합이라면 두번째 단어부터 첫글자를 대문자로 쓰기
- ex) 현재 접속한 사용자 -> currentUserName<br>
- 변하지 않는 하드코딩한 상수는 대문자와 언더바로 명명한다.<br>ex) BIRTH_YEAR
- 변수를 재사용하기보다는 새로운 변수를 선언하기 (오류날 확률이 크기 
때문)

<br>

## 기본 연산자

1. 기본용어
- 피연산자(operand) : 연산의 대상 * 인수(argument) ex) 5 * 2 → 5, 2
- 단항(unary) 연산자 : 피 연산자를 하나만 받는 연산자 ex) -5 → -
- 이항(binary) 연산자 : 펴 연산자를 두개 받는 연산자 ex) 1-5 → -
2. 나머지 연산자(%, remainder operator) : a % b 는 a를 b로 나눈 나머지를 정수로 반환
3. 거듭제곱 연산자(**, exponentiation operator) : a ** b 는 a의 b승
* b에 1/2을 하면 제곱근도 구할 수 있음.
4. 문자열 연결 : + 연산자를 사용할 때, 피연산자 중 하나가 문자열이면 나머지 하나도 문자열로 변환하여 연산한다.
※ 단, 순차적으로 진행되는 것에 유의한다. ex) alert(2 + 2 + '1' ); // '221'이 아니라 '41'이 출력됩니다.
5. 단항연산자 + : 숫자에 +를 붙이면 아무일도 안일어나지만, 피연산자가 숫자가 아닐경우, 숫자로 변환 시킨다.
* Number(..)와 동일한 역할을 할 수 있다.
- alert( +apples + +oranges ); // 5 이항 덧셈 연산자가 적용되기 전에, 두 피연산자는 숫자형으로 변화합니다.
☞ 연산자 우선순위로 인하여, 덧셈연산자 이전에 숫자형으로 변경된다.
6. 연산자 우선순위(precedence) : 우선순위 테이블(precedence table)에 의하여 숫자가 클수록 먼저 실행된다.
=>MDN우선순위 테이블
7. 할당 연산자 (=, assignment operator)
- x = value를 호출하면, x에 value를 씌우고, value 자체가 반환된다.
- 이러한 특성을 이용하여 할당 체이닝이 가능하다. ex) a = b = c = 2 + 2;
- (+=, *=, /=, -=) 등의 복합 할당 연산자도 있음.
8. 증가·감소 연산자(increment/decrement operator)
- 변수 앞이나 뒤에 올 수 있다. * 전위형(prefix form), 후위형(postfix form)
- 변수에만 사용할 수 있다.
9. 비트연산자(bitwise operator) * 32비트 정수
- AND(&), OR(|), XOR(^), NOT(~), LEFT SHIFT(<<), RIGHT SHIFT(>>), ZERO_FILL RIGHT SHIFT(>>>)
10. 쉼표 연산자(, comma operator)
- 마지막 표현식의 평가결과만 반환된다. ex) let a = (1 + 2, 3 + 4); // a = 7 (3 + 4)
11. 틀린문제
- "" - 1 + 0 = 10 빈문자는 숫자형으로 변환시 0이 된다.
- undefined + 1 : undefined는 숫자형으로 변환시 NaN이 된다.

<br>


## 비교 연산자

1. 비교 연산자는 불린형을 반환한다.
2. 문자열 비교는 사전편집(lexicographical)순으로 비교한다.
* 정확히는 사전순이 아니라, 유니코드 순이다. (A보다 a가 더크다)
3. 비교하는 자료형이 다를 경우, 숫자형으로 바꾼다.
* true는 1, false는 0으로 변환된 후 비교된다. ( null은 0 / undefine은 NaN으로 변환된다.)
4. 동등연산자(==, equality operator)
- 0 과 false, '' 과 false을 구별하지 못한다.
- null과 undefine은 특이케이스인데, 형변환을 하지 않고, 둘일때만 true를 반환한다.
5. 일치연산자(===, strict equality operator)를 사용해야 형 변환 없이 비교한다.
6. 주의할점
- undefined나 null이 될 수 있는 변수의 경우, <, >, <=, >= 피연산자가 되지 않도록 한다.
* 만약 쓸경우, null이나, undefined여부를 확인하는 코드를 반드시 추가한다.
- 되도록 일치연산자(===)를 사용한다.
7. 문제풀이
- "2" > "12" : 자료형이 다를경우에만 숫자형으로 변환한다.
- null == "\n0\n" : null은 undefined 만 true임.

<br>

## if 문

1. 0, "", null, undefined NaN 은 모두 falsy 이다. 이외 값은 truthy
2. 조건부 연산자는 조건에 따라 반환값을 다르게 할 때 이용하는 것을 추천한다.
3. 단순히 여러 분기를 만들어 처리할 때는 if를 이용하는 것을 추천한다.

<br>

> [모던 JavaScript 튜토리얼](https://ko.javascript.info/)을 보고 정리한 내용입니다.