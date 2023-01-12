# Jan 12, 2023 

method를 찾아서 풀거나, 인터넷에서 검색해서 푸는 것보다 내가 알고 있는 부분만으로 풀어 보자.<br>풀면서 떠오르는 아이디어가 내 실력이 된다.<br><br>
*전체적으로 쉬웠다.<br>마냥 생각하기보다 일단 코드를 쳐보는 게 더 두뇌회전에 도움이 되었다.*
    
* * *

## [피자 나눠 먹기 (1)](https://school.programmers.co.kr/learn/courses/30/lessons/120814)
>머쓱이네 피자가게는 피자를 일곱 조각으로 잘라 줍니다.<br> 피자를 나눠먹을 사람의 수 n이 주어질 때, 모든 사람이 피자를 한 조각 이상 먹기 위해 필요한 피자의 수를 return 하는 solution 함수를 완성해보세요.

    /* 처음 풀었을 때
    function solution(n) {
        let a = n % 7 !== 0 ? 1 : 0;
        const b = Math.floor(n / 7);
        return a + b;
    } 
    2023-01-12 */
    const solution = n => Math.ceil(n/7)
## [피자 나눠 먹기 (2)](https://school.programmers.co.kr/learn/courses/30/lessons/120815)
>머쓱이네 피자가게는 피자를 여섯 조각으로 잘라 줍니다.<br>피자를 나눠먹을 사람의 수 n이 매개변수로 주어질 때, n명이 주문한 피자를 남기지 않고 모두 같은 수의 피자 조각을 먹어야 한다면 최소 몇 판을 시켜야 하는지를 return 하도록 solution 함수를 완성해보세요.

    const solution = n => {
        pizza = 1;
        while(6*pizza%n!==0){
            pizza++
        }
        return pizza
    }
## [피자 나눠 먹기 (3)](https://school.programmers.co.kr/learn/courses/30/lessons/120816)
>머쓱이네 피자가게는 피자를 두 조각에서 열 조각까지 원하는 조각 수로 잘라줍니다.<br>피자 조각 수 slice와 피자를 먹는 사람의 수 n이 매개변수로 주어질 때, n명의 사람이 최소 한 조각 이상 피자를 먹으려면 최소 몇 판의 피자를 시켜야 하는지를 return 하도록 solution 함수를 완성해보세요.

    const solution = (slice,n) => Math.ceil(n/slice)

## [배열의 평균값](https://school.programmers.co.kr/learn/courses/30/lessons/120817)
>정수 배열 numbers가 매개변수로 주어집니다.<br> numbers의 원소의 평균값을 return하도록 solution 함수를 완성해주세요.

    function solution(numbers) {
        let result = 0;
        for (const num of numbers) {
            result += num;
        }
        return result / numbers.length;
    }