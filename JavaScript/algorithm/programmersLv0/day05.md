# Jan 13, 2023 

method를 찾아서 풀거나, 인터넷에서 검색해서 푸는 것보다 내가 알고 있는 부분만으로 풀어 보자.<br>풀면서 떠오르는 아이디어가 내 실력이 된다.<br><br>
*1번 문제 price가 10의 단위로 떨어져야한다는 조건이였는데 반올림지, 올림인지, 내림인지 부가설명이 안되있어서 계속 틀렸었다.*
    
* * *

## [옷가게 할인 받기](https://school.programmers.co.kr/learn/courses/30/lessons/120818)
>머쓱이네 옷가게는 10만 원 이상 사면 5%, 30만 원 이상 사면 10%, 50만 원 이상 사면 20%를 할인해줍니다.<br>
구매한 옷의 가격 price가 주어질 때, 지불해야 할 금액을 return 하도록 solution 함수를 완성해보세요.

    function solution(price) {
        let a = price
        if(a >= 500000) return Math.floor(a*0.8) 
        if(a >= 300000) return Math.floor(a*0.9)
        if(a >= 100000) return Math.floor(a*0.95)
        if(a >= 10) return Math.floor(a)
    }
## [아이스 아메리카노](https://school.programmers.co.kr/learn/courses/30/lessons/120819)
>머쓱이는 추운 날에도 아이스 아메리카노만 마십니다. 아이스 아메리카노는 한잔에 5,500원입니다.<br>
머쓱이가 가지고 있는 돈 money가 매개변수로 주어질 때, 머쓱이가 최대로 마실 수 있는 아메리카노의 잔 수와 남는 돈을 순서대로 담은 배열을 return 하도록 solution 함수를 완성해보세요.

    function solution(money) {
        return [parseInt(money/5500),money%5500]
    }
## [나이 출력](https://school.programmers.co.kr/learn/courses/30/lessons/120820)
>머쓱이는 40살인 선생님이 몇 년도에 태어났는지 궁금해졌습니다. 나이 age가 주어질 때, 2022년을 기준 출생 연도를 return 하는 solution 함수를 완성해주세요.

    /* 처음 풀었을 때
    function solution(age) {
        var answer;
        var now= new Date()
        var year = now.getFullYear();
        answer = year - age
        return answer;
    }
    2023-01-14 */
    const solution = age => {
        const year = new Date().getFullYear();
        return year - age + 1
    }
## [배열 뒤집기](https://school.programmers.co.kr/learn/courses/30/lessons/120821)
>정수가 들어 있는 배열 num_list가 매개변수로 주어집니다. num_list의 원소의 순서를 거꾸로 뒤집은 배열을 return하도록 solution 함수를 완성해주세요.

    // const solution = num_list => num_list.reverse();