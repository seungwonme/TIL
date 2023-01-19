//  Array.sort([compareFunction(비교 함수)])

const singleDigit = [9, 8, 7, 6, 5, 4, 3, 2, 1];

console.log(singleDigit.sort());
// [1,2,3,4,5,6,7,8,9]

const numbers = ['9', 8, 7, '7', 6, '66', 1000, '100'];

console.log(numbers.sort());
// ['100', 1000, 6, '66', 7, '7', 8, '9'];
// 크기 순이 아닌 array[0]에 해당되는 수의 유니코드를 비교한다.

console.log(numbers.sort((a, b) => a - b));
// [6, 7, '7', 8, '9', '66', '100', 1000] 오름차순

console.log(numbers.sort((a, b) => b - a));
// [1000, '100', '66', '9', 8, 7, '7', 6] 오름차순