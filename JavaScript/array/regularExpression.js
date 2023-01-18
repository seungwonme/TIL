// 정규식은 문자열에서 특정 내용을 찾거나 대체 또는 발췌하는데 사용된다.
// 정규식 구성 : /regexr/i
// /는 시작과 끝을, regexr는 패턴을 , i는 플래그를 나타낸다.

const TN = /\d{3}-\d{4}-\d{4}/;
// \d => number , {} => char

console.log(TN.test(`010-1234-5678`)); // true
console.log(TN.test('010-124-5678')); // false

// 정규식 method

// String.match(/regexr/i) 문자열에서 정규표현식에 매칭되는 항목 배열로 반환
const regexr = /LOVE/;
console.log('IAMALOVEAPPLE'.match(regexr));
// [ 'LOVE', index: 4, input: 'IAMALOVEAPPLE', groups: undefined]

// String.replace(/regexr/,"대체문자열") 정규표현식에 매칭되는 항목을 대체문자열로 변환
console.log('ILOVEYOU'.replace(regexr, 'HATE'));
// IHATEYOU

// String.split(/regexr/) 문자열을 정규표현식를 기준으로 쪼개어 배열로 반환
console.log('DOYOULOVEMELOVEMELOVEME'.split(regexr));
// [ 'DOYOU', 'ME', 'ME', 'ME' ]

// /regexr/.test(String) 문자열 안에 정규표현식을 매칭해서 Boolean 타입을 반환한다. (완전히 맞을 때 true)
console.log(regexr.test('LOVE'));
// true
console.log(regexr.test('LOV'));
// false

// /regexr/.exec(String) match메서드와 유사 (단, 무조건 첫번째 매칭 결과만 반환)
console.log(regexr.exec('IHATEYOUBUTILOVEYOU'));
// [ 'LOVE', index: 12, input: 'IHATEYOUBUTILOVEYOU', groups: undefined ]
