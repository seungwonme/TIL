const cat = require('./cat')
const cow = require('./cow')
const dog = require('./dog')

const animals = [cat,cow,dog]
module.exports = animals

console.log(animals);
// anseungwon@won shelter % node index.js
// [
//   { name: 'cat', say: 'meow' },
//   { name: 'cow', say: 'meh' },
//   { name: 'dog', say: 'bark' }
// ]
