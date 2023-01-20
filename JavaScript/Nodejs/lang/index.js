import { franc } from 'franc';
import langs from 'langs';
const input = process.argv[2];

console.log(color);
const langCode = franc(input);
if (langCode === 'und') {
    console.log('Sorry, I dont know'.green);
} else {
    const language = langs.where('3', langCode);
    console.log(`Our best guess is ${language.name}`);
}
