// String.padStart(targetLength, [padString])

const star = '*'

console.log(star.padStart(3));
// '  *' targetLength만큼 문자열의 길이를 앞으로 늘린다.
// 이 때, padString를 작성하지 않는다면 공백으로 채운다.

console.log(star.padStart(3, '*'));
// '***'

console.log(star.padStart(3, 'star'));
// '*st'

console.log(star.padEnd(3));
// '*  ' pad는 padding, Start or End는 padding의 위치