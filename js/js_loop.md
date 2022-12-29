# iteration statement in javascript

## for loop
    //별 추가하기
    for (let i = 0; i <= 9; i++) {
        let star = '*';
        document.write('<br>');
        for (let j = 0; j <= i; j++) {
            document.write(star);
        }
    }

    // 결과
    *
    **
    ***
    ****
    *****
    ******
    *******
    ********
    *********
    **********
처음에는 *이 10개있는 변수를 만들어 length에게 i값을 주어 *의 개수를 다르게 만들려고 했었다...<br>
다행히 if문처럼 for문을 2중으로 만들면 어떨까란 생각이 불현듯 떠올라 빠르게 만들었다.
    
    // 첫 코드 ㅋㅋ
    for (let i = 0; i <= 9; i++) {
        let star = "**********"
        let starLength = star.length
        starLength = i
        document.write("<br>" + star)
    }

    //결과
    *********
    *********
    *********
    *********
    *********
    *********
    *********
    *********
    *********
    *********
처음이니까 그럴 수 있는 거잖아..

    // 별 홀수
    for (let i = 0; i <= 9; i++) {
        let star = '*';
        document.write('<br>' + star);
        for (let j = 1; j <= i; j++) {
            document.write(star+star);
        }
    }

    // 결과
    *
    ***
    *****
    *******
    *********
    ***********
    *************
    ***************
    *****************
    *******************