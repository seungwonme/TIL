# Jan 13, 2023 

method를 찾아서 풀거나, 인터넷에서 검색해서 푸는 것보다 내가 알고 있는 부분만으로 풀어 보자.<br>풀면서 떠오르는 아이디어가 내 실력이 된다.<br><br>
*js 알고리즘 문제에서 print를 어떻게 하는 지 찾아봐야겠다.*
    
* * *

## [문자열 뒤집기](https://school.programmers.co.kr/learn/courses/30/lessons/120822)
>문자열 my_string이 매개변수로 주어집니다. my_string을 거꾸로 뒤집은 문자열을 return하도록 solution 함수를 완성해주세요.
    
    function solution(my_string) {
        let result = '';
        for (i = my_string.length - 1; i >= 0; i--) {
            result += my_string[i];
        }
        return result;
    }
## [직각삼각형 출력하기](https://school.programmers.co.kr/learn/courses/30/lessons/120823)
>별의 높이와 너비를 1이라고 했을 때, 별을 이용해 직각 이등변 삼각형을 그리려고합니다. 정수 n 이 주어지면 높이와 너비가 n 인 직각 이등변 삼각형을 출력하도록 코드를 작성해보세요.

    이미 정리해놓은 개념인데 어떻게 화면에 출력하는 것인지 모르겠다.
## [짝수 홀수 개수](https://school.programmers.co.kr/learn/courses/30/lessons/120824)
>정수가 담긴 리스트 num_list가 주어질 때, num_list의 원소 중 짝수와 홀수의 개수를 담은 배열을 return 하도록 solution 함수를 완성해보세요.

    function solution(num_list) {
        let even = 0;
        let odd = 0;
        for(let i=0; i<num_list.length; i++){
            let num = num_list[i]
            console.log(i);
            console.log(num);
            num%2 === 0 ? even++ : odd++;
        }
        return [even,odd]
    }
## [문자 반복 출력하기](https://school.programmers.co.kr/learn/courses/30/lessons/120825)
>문자열 my_string과 정수 n이 매개변수로 주어질 때, my_string에 들어있는 각 문자를 n만큼 반복한 문자열을 return 하도록 solution 함수를 완성해보세요.

    function solution(my_string, n) {
        let newString = '';
        for(i=0;i<my_string.length;i++){
            for(j=0;j<n;j++){
                newString += my_string[i];
            }
        }
        return newString
    }

