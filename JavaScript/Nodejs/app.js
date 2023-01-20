// const math = require('./math') // 모듈이 아닌 파일을 참조하는 경우에는 ./ 로 경로를 명시
const {add,PI,square} = require('./math')
console.log(add(3,6),PI,square(13));

// console.log(math);
// module.exports = math // 기본 값 객체

const animals = require('./shelter/index')

console.log(animals);
// anseungwon@won section31T32 % node app.js 
// 9 3.141592653589793 169
// [
//   { name: 'cat', say: 'meow' },
//   { name: 'cow', say: 'meh' },
//   { name: 'dog', say: 'bark' }
// ]

const giveMeAJoke = require('give-me-a-joke')
const colors = require('colors')

giveMeAJoke.getRandomDadJoke (function(joke) {
    console.log(joke.rainbow);
});
