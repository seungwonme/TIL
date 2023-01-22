## Shell
    [pwd] print working directory: 현재 위치 경로
    [ls] list: 현재 위치에 있는 파일 혹은 폴더 확인
      -a all: 숨겨진 파일
      -l: 세부 정보
      -la 도 가능하다.
    [cd] change directory: 이동
      ~: 루트 폴더
      -: 이전 경로로 이동

    find . -type file -name "*.txt" : 현재 경로로부터 txt 파일 찾음
    find . -type directory -name "*2" : 현재 경로로부터 2로 끝나는 폴더 찾음

    which node: node의 경로 확인
    which code: vscode의 경로 확인

    [touch]: 파일 생성 혹은 파일 수정 날짜 업데이트
    [cat]: 파일 안의 컨텐츠 확인
    echo "내용" > 파일이름 : 파일에 내용을 덮어씌운다. (만약, 파일명이 존재하지 않는다면 새로 만든다.)
    echo "내용" >> 파일이름 : 파일에 내용을 추가한다.

    mkdir -p 경로 : 경로에 폴더를 생성한다. (경로의 폴더들이 존재하지 않다면 새롭게 만든다.)
    rm -r : 폴더를 삭제한다.

    cp 파일 경로 : 경로에 파일을 복사한다.
    mv 파일 경로 : 경로로 파일을 이동시킨다.

    [grep] global regular expression print: 현재 경로에서 내용과 일치하는 내용을 가진 txt 파일을 찾음
    grep "내용" *.txt
      -n: 몇번째 줄에 있는지 확인
      -ni: 대소문자 상관없어짐
      -nir: 하위 폴더까지 싹다 뒤짐
    

[드림코딩 명령어 정리](https://www.youtube.com/watch?v=EL6AQl-e3AQ&list=PLtMKWib7le2Z-M2r_R9zkVR_MQbx31rfC&index=1&t=1233s) ~ 20:49