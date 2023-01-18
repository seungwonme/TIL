// string.split( separator(선별기) , limit(option) ) 

const comma = 'a,b,c,d'

console.log(comma.split(','));
//[ 'a', 'b', 'c', 'd' ]
console.log(comma.split(',',2));
//[ 'a', 'b' ]
console.log(comma);
// a,b,c,d 비파괴 메서드

const repeatA = 'abcAdefAghiAjkl'

console.log(repeatA.split('A'))
// [ 'abc', 'def', 'ghi', 'jkl' ]
console.log(repeatA.split('A',1))
// [ 'abc' ]