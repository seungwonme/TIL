const fs = require('fs');
const folderName = process.argv[2] || 'Project'; // default

// console.log(fs);
// fs.mkdir('Dogs', {recursive: true}, err => {
// console.log('in the callback');
// if (err) throw err;
// })
// console.log('after mkdir');
// 비동기

// console.log('after mkdir');
try {
    fs.mkdirSync(folderName);
    fs.writeFileSync(`${folderName}/index.html`, '');
    fs.writeFileSync(`${folderName}/style.css`, '');
    fs.writeFileSync(`${folderName}/app.js`, '');
} catch (e) {
    console.log('error');
}
// 동기
