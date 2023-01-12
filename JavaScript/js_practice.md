    let age = parseInt(prompt("몇 살인가요?",""))
    if(isNaN(age)){
        console.log("숫자를 써주세요.")
    } else{
        if((age < 50) && (age > 18)){
            console.log("술 드세요")
        } else if((age < 120) && (age >= 50)){
            console.log("건강관리 !")
        } else if((age <= 18) && (age > 0)){
            console.log("술 먹지마요")
        } else{
            console.log("올바른 나이를 입력해주세요.")
        }
    }
* * *
    let first = prompt("첫번째 숫자","")
    let firstNumber = parseInt(first)
    let second = prompt("두번째 숫자","")
    let secondNumber = parseInt(second)
    if(isNaN(firstNumber) && isNaN(secondNumber)){
        alert("첫번째 숫자와 두번째 숫자가 정상적이지 않습니다.")
    } else if(isNaN(firstNumber)){
        alert("첫번째 숫자가 정상적이지 않습니다.")
    } else if(isNaN(secondNumber)){
        alert("두번째 숫자가 정상적이지 않습니다.")
    } else {
        if(firstNumber > secondNumber){
            alert("첫번째 숫자가 더 큽니다")
        } else if(firstNumber < secondNumber){
            alert("두번째 숫자가 더 큽니다")
        } else if(firstNumber == secondNumber){
            alert("같습니다.")
        }
    }
    console.log(`${firstNumber}, ${secondNumber}`)
* * *
    let userNum = prompt("숫자를 입력하세요.","")
    if(userNum == null){
        alert("입력이 취소되었습니다.")
    } else {
        if(isNaN(parseInt(userNum))){
            alert("숫자가 아닙니다.")
        } else if(userNum < 0){
            alert('음수입니다.')
        } else if(userNum == 0){
            alert('0입니다.')
        } else if(userNum%3 == 0){
            alert("3의 배수입니다.")
        } else if(userNum%3 !== 0){
            alert("3의 배수가 아닙니다.")
        }
    }
    console.log(userNum)