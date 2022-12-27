    let age = parseInt(prompt("몇 살인가요?",""))
            if(isNaN(age)){
                console.log("숫자를 써주세요.")
            }
            else{
                if((age < 50) && (age > 18)){
                    console.log("술 드세요")
                }
                else if((age < 120) && (age >= 50)){
                    console.log("건강관리 !")
                }
                else if((age <= 18) && (age > 0)){
                    console.log("술 먹지마요")
                }
                else{
                    console.log("올바른 나이를 입력해주세요.")
                }
            }