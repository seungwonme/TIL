# Jan 12, 2023 

method를 찾아서 풀거나, 인터넷에서 검색해서 푸는 것보다 내가 알고 있는 부분만으로 풀어 보자.<br>풀면서 떠오르는 아이디어가 내 실력이 된다.<br><br>
*2번은 method를 알면 쉬웠지만 반복문으로 풀 때 숙지가 안되있고, 3번은 그냥 모르겠다.*
    
* * *

## [나머지 구하기](https://school.programmers.co.kr/learn/courses/30/lessons/120810)
>정수 num1, num2가 매개변수로 주어질 때, num1를 num2로 나눈 나머지를 return 하도록 solution 함수를 완성해주세요.

    /* 그전에 풀었을 때
    function solution(num1, num2) {
        var answer
        answer = num1 % num2
        return answer;
    } 
    2023-01-12 */
    const solution = (num1,num2) => num1%num2

## [중앙값 구하기](https://school.programmers.co.kr/learn/courses/30/lessons/120811)
>중앙값은 어떤 주어진 값들을 크기의 순서대로 정렬했을 때 가장 중앙에 위치하는 값을 의미합니다<br>예를 들어 1, 2, 7, 10, 11의 중앙값은 7입니다.<br> 정수 배열 array가 매개변수로 주어질 때, 중앙값을 return 하도록 solution 함수를 완성해보세요.<br> (제한사항 array.length%2 === 1, -1000< array[n] <1000)

    // 1. 배열에서 최솟값을 찾는다.
    // 1-1. 빈 배열에 집어넣는다. 이 때, 1의 배열은 그 값을 잃는다.
    // 1-2. 다시 1로 돌아가서 반복한다.
    // 2. 1의 배열이 비면 2의 배열의 중앙값을 리턴한다.

    /* 원래 구글링으로 풀었음
    function solution(array) {
        return array.sort(function (a, b) {
            if (a > b) return 1;
            if (a === b) return 0;
            if (a < b) return -1;
        })[Math.floor(array.length/2)];
    } 
    2023-01-12 */
    const solution = array => {
        let answer = [];
        let minNum = 1000;
        for(i=0;i<array.length;i++){
            for(j=0;j<array.length;j++){
                if(minNum > array[j]){
                    minNum = array[j]
                }
            }
            for(k=0;k<array.length;k++){
                if(array[k] === minNum){
                    array[k] = 1000; // array 안의 값은 항상 1000보다 작음
                    break; // 중복된 수 고려
                }
            }
            answer.push(minNum);
            minNum = 1000;
        }
        return answer[Math.floor(answer.length/2)]
    }
## [최빈값 구하기](https://school.programmers.co.kr/learn/courses/30/lessons/120812)
>최빈값은 주어진 값 중에서 가장 자주 나오는 값을 의미합니다.<br>정수 배열 array가 매개변수로 주어질 때, 최빈값을 return 하도록 solution 함수를 완성해보세요.<br>최빈값이 여러 개면 -1을 return 합니다.

    정말 method 없이 풀 수 있는 방법을 이해를 못해서 method로 풀어보고 다음에 한 번 더 해볼 예정
## [짝수는 싫어요](https://school.programmers.co.kr/learn/courses/30/lessons/120813)
>정수 n이 매개변수로 주어질 때, n 이하의 홀수가 오름차순으로 담긴 배열을 return하도록 solution 함수를 완성해주세요.

    // 1. 빈 배열을 만든다.
    // 2. 초기값이 1이고 2씩 커지는 변수가 n보다 작거나 같을 때 반복한다.

    function solution(n) {
        let array = [];
        for(i=1;i<=n;i=i+2){
            array.push(i)
        }
        return array
    }