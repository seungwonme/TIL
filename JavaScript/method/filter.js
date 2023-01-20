// Array.filter(callback(element[, index[, array]])[, thisArg]) 
// callback 함수를 잘 모른다..

// Array.filter((element[, index][, array]) => { /* … */ })
// 이거로 이해하자

const words = ['o','tw','thr','four']

console.log(words.filter(word => word.includes('t')));
// [ 'tw', 'thr' ] filter 함수 안의 함수의 조건에 true를 반환한 값만 배열로 나온다.
// 말 그대로 필터인셈

console.log(words.filter(word => word.length > 2));
// [ 'thr', 'four' ]