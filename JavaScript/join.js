// Array.join([separator])

const elements = ['fire','air','water'];

console.log(elements.join());
// fire,air,water default 값 ','가 들어가 있다.

console.log(elements.join(''));
// fireairwater

console.log(elements.join(' or '));
// fire or air or water

const empty = [];

console.log(empty.join());
// 빈 문자열 반환
console.log(empty.join('--'));
// 배열의 요소 사이에 괄호 안의 값을 넣기 때문에 빈 문자열이 반환된다.

const falsy = [null,undefined];

console.log(falsy.join());
// ',' null, undefined은 빈 문자열로 반환된다.
