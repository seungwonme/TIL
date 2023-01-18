const str1 = 'hi my name is';
const str2 = [...str1];

console.log(str2);
/* 
[
  'h', 'i', ' ', 'm',
  'y', ' ', 'n', 'a',
  'm', 'e', ' ', 'i',
  's'
]
*/

const arr1 = [1, 2, 3, 4, 5];
const arr2 = [6, 7, 8];
const arr3 = [...arr1, ...arr2];
// = arr1.concat(arr2)

console.log(arr3);
/* 
[
  1, 2, 3, 4,
  5, 6, 7, 8
]
*/

const arr4 = [11,12]
const arr5 = [9,10,...arr4,13]

console.log(arr5);

const obj1 = {
  name: 'seungwon',
  age: 23,
};
const obj2 = {
  handsome: true,
  country: 'korea',
};
const obj3 = {
  ...arr1,
  ...arr2,
  ...obj1,
  ...obj2,
};

console.log(obj3);
/*
{
  '0': 6,
  '1': 7,
  '2': 8,
  '3': 4,
  '4': 5,
  name: 'seungwon',
  age: 23,
  handsome: true,
  country: 'korea'
} 
*/
