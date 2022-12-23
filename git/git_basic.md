## UNIX Commands
**ls (list) : 현재 디렉토리, 폴더에 있는 콘텐츠 나열**

**ls -a : 현재 디렉토리, 폴더에 있는 숨은 파일 나열**

+folder : 선택한 하위 폴더에 있는 콘텐츠 나열
+folder(1)/folder(2) : folder(1) 안의 folder(2) 의 콘텐츠 나열


**open (window에서는 start) : finder 실행**

+. : finder 실행
+folder : folder 창 finder 실행
+folder(1)/folder(2) : folder(1) 안의 folder(2) 창 finder 실행

**clear : 창 청소 (Shortcut: command + k) **

**pwd (Print Working Directory) : 현재 작업하고 있는 디렉토리 출력**

**cd (Change Directory) : 디렉토리를 이동, finder 안열리는 open**.

cd .. : 상위 폴더로 이동

**touch : 파일 생성**

+file.xx file(1).xx ... : 여러개의 파일 생성
+folder/file.xx : folder 안에 파일 생성

**mkdir (Make DIrectory) : 폴더 생성, touch와 같은 방식으로 작동**

**rm (Remove) : 파일 삭제 (휴지통이 아닌 영구삭제이기 때문에 조심)**

**rm -rf (Recursive Force) : 폴더, 디렉토리 삭제 
(폴더 안에 파일이 있어도 영구삭제)**

<hr/>

## Git Commands

https://git-scm.com/docs

>**git status : 현재 디렉토리의 git repository status 확인**


>**git init : 명령어를 실행하는 directory에서 git repository 초기화
(이 명령어는 프로젝트당 한 번만 실행)<br>
이 과정에서 .git 이라는 숨겨진 directory 생성 
이 때, git repository를 지우고 싶다면 .git을 지우면 된다.<br>
.git 은 깃에 대한 모든 정보들을 갖고 있음.
(ls -a 로 확인 가능, 숨겨진 파일들은 .으로 시작)**

<br>

> git은 속한 폴더의 포함된 모든 것들을 상위 레벨에서 제어한다.
git repository가 있는 디렉토리에서 변경하는 파일이나 폴더는 git에 의해 추적된다. <br>
git repository가 포함된 폴더 안에서 git repository 를 초기화해서는 안된다.
깃이 깃을 추적하는 오작동이 일어나기 때문이다. <br>
가장 쉬운 방법은 git init을 실행하기전에 git status를 먼저 사용하는 것
프로젝트를 하기 위한 폴더를 만들면 그 폴더 안에서 git repository를 먼저 초기화해야한다.

Git commit 순서는 이렇다.
```
Working Directory -> git add -> 
Staging Area -> git commit -> Repository
```

git commit을 한다는 것은 변경사항을 요약한 commit message 을 포함하여 git repository를 업데이트한다는 것
<br>

>**git add : Working Directory의 모든 파일을 Staging Area로 보낸다.**<br>
+**file.xxx file1.xxx** : Working Directory에 있는 file, file1을 Staging Area로 보낸다.<br>
이 후 git commit을 하면 Staging Area에 있는 file들만 commit 되기 때문에 그룹화하여 commit할 수 있는 것이다.<br>
**+.** : Working Directory에서 변경내역이 있는 모든 file을 Staging Area로 보낸다.

>**git commit : Staging Area에 있는 file들을 commit한다. 처음에 이 명령어를 실행한다면 터미널에 기본적으로 내장되어 있는 vim 에디터가 나온다.**
![](https://velog.velcdn.com/images/k1dk/post/9f35fafc-badd-46a7-8c72-688534c18aba/image.png)
바로 입력을 실행할 수 없기 때문에 i (insert)를 눌러줘야 한다.
![](https://velog.velcdn.com/images/k1dk/post/29d80582-3875-4a9e-b02d-aa6fbf601c0d/image.png)
밑에 INSERT라는 표시가 나오면 commit massage를 입력할 수 있게 된다.
![](https://velog.velcdn.com/images/k1dk/post/845a876c-41ca-4c88-ba30-fca31a4e4431/image.png)
commit massage를 입력하고 INSERT MODE에서 빠져나가기 위해 Esc키를 눌러준다.
![](https://velog.velcdn.com/images/k1dk/post/431a8d90-bdae-4969-98c6-bc67aba2cb44/image.png)
밑에 INSERT 표시가 사라졌으면 :wq (Write Quit)을 입력하면 commit이 되며 vim에서 빠져나갈 수 있다.
![](https://velog.velcdn.com/images/k1dk/post/45407a62-42fc-41e1-88a2-b03ff7c2291a/image.png)
git log를 사용하면 정상적으로 git massage와 함께 commit된 것을 알 수 있다.
<br>

>**git commit -m "my message" : "my massage"를 commit massage로 사용하고 Staging Area에 있는 모든 file들을 commit 한다.
간편한 대신 commit massage를 한줄로 밖에 못쓴다는 단점이 존재한다.**<br>
**git commit -am (-a -m) "my message" : git add . + git commit -m "my message" **
<br>

>**git commit --amend :바로 직전의 커밋에서 commit massage를 변경하거나 잊었던 file을 포함할 수 있다. **
![](https://velog.velcdn.com/images/k1dk/post/7b99b532-06fb-4441-8775-9af53004bdb9/image.png)
> 4개의 file 모두 수정사항이 있었지만 깜빡하고 outline.txt를 제외한 나머지 3가지 file만을 commit 해버렸다면 outline.txt를 git add하여 Stage Area로 보내고 git commit --amend를 통해서 위의 창을 볼 수 있다. <br>
outline.txt가 정상적으로 직전에 했던 commit에 함께 올라갔고 commit massage또한 변경할 수 있다는 것을 알 수 있다.

>**commit message를 쓸 때 주의할 점** : git에서는 공식적으로 과거시제가 아닌 현재시제의 명령형를 사용할 것을 권한다.
하지만 회사나 오픈소스 프로젝트에서 과거시제를 사용한다면 똑같이 과거시제를 사용해야 한다.<br>
**중요한 것은 일관성을 유지한다는 것.**

> **Atomic commits** : commit은 단일 기능이나 단일 변화, 수정만을 포함해야한다. 
**각각의 commit은 한가지에 집중해야 한다는 것이다. **
file 하나를 말하는 것이 아닌 하나의 기능이나 작업을 의미한다.



>**.gitignore** : 이 file 안에 써져있는 file이나 directory는 git repository 안에 있어도 git에게 추적되지 않는다.<br>
보통 repository의 최상위 루트에 넣는다.
![](https://velog.velcdn.com/images/k1dk/post/eb5c7c01-c653-4768-9757-f73ffba6ef9a/image.png)
뒤에 /가 붙은 것은 폴더이며 .gitignore에 쓴 file들을 수정하고 git status로 확인해봐도 
![](https://velog.velcdn.com/images/k1dk/post/6fc9b2bf-8d17-4437-b7ba-ed927f3711d7/image.png)
git이 추적하지 않는 것을 알 수 있다.<br><br>
https://www.toptal.com/developers/gitignore/<br>
작업하고 있는 프로젝트에 맞는 .gitignore 파일을 보여준다.
깃 문서에서 추천하는 사이트다.

<br>

>**git log : git commit들을 commit hash, Author, Date, message 와 함께 나열한다.**<br>
commit log가 너무 많으면 빠져나가지 못하는 상황이 생기는데 q를 누르면 간단히 해결이 된다.

```
commit 1b929760ffa4f23c3b3213145a616ec94688722e (HEAD -> master)
Author: seungwonme <seungwonan.me@gmail.com>
Date:   Sat Nov 26 10:22:57 2022 +0900

    begin work on chapter1
    
commit 009d2eed6f32dd7a017451378da3682f7047c34c
Author: seungwonme <seungwonan.me@gmail.com>
Date:   Fri Nov 25 23:55:53 2022 +0900

    start work on outline and basic charators
```

>**git log --oneline : git log --pretty=oneline --abbrev-commit 을 줄인 것
log를 간략하고 가독성 좋게 볼 수 있다.**

```
6c16a21 (HEAD -> master) last last version
0905720 last version
618cac8 split chapter 1 into two pieces
0ca2b6f finish chapter 1
1b92976 begin work on chapter1
009d2ee start work on outline and basic charators
```
<br>

>**git branch : branch (bookmark 개념) 목록을 보여준다.<br>
+branchname : head가 현재 가리키고 있는 branch에서(branch를 따로 만들지 않았다면 master branch이다.)
branchname이라는 branch를 생성한다. (이동하는 것이 아닌 생성한다.)<br><br>
-d (--delete) branchname : branchname이라는 branch를 삭제한다.<br>
만약 삭제하려는 branch를 head가 가리키고 있었다면**
```
error: Cannot delete branch 'deleteMe' checked out at '/Users/anseungwon/dev/roadTripPlaylist'
```
이러한 에러가 나올 것이다. <br>
다른 branch로 이동하여 다시 해보면
```
error: The branch 'deleteMe' is not fully merged.
If you are sure you want to delete it, run 'git branch -D deleteMe'.
```
이러한 에러가 나온다. 삭제하기 위해서는 병합하거나 -D 옵션을 사용해야한다.<br>
**-D (--delete --force) branchname : 병합상태와 상관없이 branch 강제 삭제를 한다.<br><br>
-m (--move) branchrename : head가 현재 가리키는 branch의 이름을 branchrename으로 바꾼다.<br> 
-v (verbose) : 각 branch의 마지막 commit의 commit hash, commit massage를 볼 수 있다.**
```
layout 10a4e27 create index.html and style.css and logo image
master 10a4e27 create index.html and style.css and logo image
```


>**git switch branchname : head가 이미 생성되어 있는 branchname을 가리킨다. (= branchname이라는 branch로 이동한다.)<br>
git switch -c (create) branchname : branchname이라는 branch를 생성하고 head가 가리킨다. (branch를 생성하고 이동한다.)<br><br>
변경사항을 commit하지 않고 이동하려고 하면 다음과 같은 에러가 나온다.**
```
error: Your local changes to the following files would be overwritten by checkout:
	playlist.txt
Please commit your changes or stash them before you switch branches.
Aborting
```
stash 혹은 commit을 해야한다.<br>
**git swich -** : 가장 최근에 있던 branch로 돌아간다. (HEAD가 commit를 가리켰던 branch를 가리켰던 간에)

>**git checkout** : 예전부터 사용하던 명령어로 너무 많은 작업을 수행하여 git switch, git restore 라는 명령어가 도입되었다.
git chechout -b branchname = git switch -c branchname<br>
**git checkout (commithash) : commit hash에 해당하는 commit 으로 돌아간다.** 
이 때, **'detached HEAD'** state (HEAD가 branch를 통해서 commit을 참조하는 것이 아닌 commit을 직접적으로 가리키는 상태) 상태로 들어가며 빠져나가기 위해서는 **branch를 만들거나 이동해야한다.** <br>
**git checkout HEAD~n :** HEAD가 가리키고 있는 branch (혹은 commit)에서 n번째 전의 commit을 참조한다.<br>
**git checkout HEAD(혹은 --) file.xxx file1.xxx ..** : Working Directory 에서 작업한 변경사항들을 가장 최근의 commit를 참조하여 되돌린다.

>**git restore = git checkout HEAD(--) **<br>
**git restore --source HEAD~1(or commithash) file.xxx ... ** : file을 source를 통해 특정하여 참조한 후 되돌린다. (기본값은 HEAD)<br>
기본적으로 현재 commit되지 않은 변경 사항을 제거하는 것이 확실할 때만 사용해야한다.<br>
**git restore --staged file.xxx : Staging Area에 있는 file을 Working Directory로 옮긴다.**

>**git reset (commit hash혹은 HEAD~1...)** : 현재 branch에서 참조하고 있는 commit ~ 지정한 commit hash 사이를 지워버리고 commit hash에 해당하는 commit으로 branch가 이동한다. (사라진 commit을 포함하고 있던 다른 branch는 commit을 잃지 않는다.)<br> 
**이 때, Working Directory의 변경사항은 사라지지 않는다.<br>
git reset --hard (commit hash)** : git reset과 동일하게 동작되나 **Working Directory의 변경사항도 같이 사라진다.**

>**git revert (commit hash혹은 HEAD~1...) : commit hash에 해당되는 commit까지의 변경사항을 취소하는 새 commit을 만든다. (협업 시 reset이 아닌 revert를 쓴다.) **

>**git merge : 현재 HEAD가 가리킨 branch가 기준이 되어 (commit이 아닌) 다른 branch와 merge한다. (merge된 branch는 삭제되지 않는다.)**<br>
만약 master branch 에서 새롭게 feature branch를 만들고 **feature branch에서만** 작업을 하여 commit을 한다음 master branch로 돌아가 feature branch와 merge한다면 이 것을 **Fast-Forward merge**라고 한다.<br>
merge하면 master branch에서도 feature branch에서 했던 작업들을 가질 수 있다.<br> 
더 복잡한 경우도 있는데 featuer branch에서만 commit한 것이 아닌 master branch에서도 별개로 commit했을 때 merge하는 경우이다.<br>
이 경우에는 병합의 기준이 되는 branch에 merge commit이 생성된다. <br>
이 merge commit은 두 개의 parents commit을 갖는다. (첫 번째가 아닌 모든 commit은 부모 commit이 있다.)

<br>

>**master branch**는 단일화된 소스 혹은 가장 안정적으로 만들어진 소스로만 구성한다.
그래서 보통 **feature branch**에서 작업하고 잠정적으로 master branch에 merge한다.

<br>

>**git diff: Staging Area에 등록되지 않은 Working Directory의 변경사항을 Staging Area에서 등록된 file과 비교하여 모두 나열한다.**
![](https://velog.velcdn.com/images/k1dk/post/7388c11d-93a7-4af9-afdd-5c567562f18e/image.png)
```
diff --git a/resume1.html b/resume1.html
```
항상 첫번째 줄에는 비교할 두 file이 나오며 git은 file들을 a,b로 부르며 부호로 구별한다.
```
index 5b95419..1fa78ab 100644
```
두번째 줄에는 file에 대한 meta data(hash)이다. 
```
--- a/resume1.html
+++ b/resume1.html
```
다음 두 줄은 file을 알파벳과 부호로 구별해준다. 
```
@@ -34,6 +34,10 @@
```
다섯번째 줄부터는 file의 변경사항을 @@ 안에 있는 숫자열로 보여준다.<br>
**-34,6은 -이므로 file a, +34,10은 +이므로 file b**에 상응한다.
**file a의 34번째 줄부터 6줄**을 가져온 것, **file b의 34번째 줄부터 10줄**을 가져온 것을 나타낸다.
```
             .h150 {
                 height: 150px;
             }
+            .ls {
+                text-align: left;
+                padding: 0 0 0 20px;
+            }
         </style>
     </head>
     <body>
```
다섯번째 줄부터는 변경사항이 있는 부분을 앞뒤로 약간만을 보여준다.
왼쪽에 부호가 있는데 **-부호로 표시된 줄은 file a에서 온 변경사항**이고, **+부호로 표시된 줄은 file b에서 온 변경사항**이다.<br>
**이 작업은 같은 이름의 두 파일을 다른 시점(branch)에서 비교하고 있는 것이다.**<br>
**git diff HEAD** : HEAD가 가리키는 최신 커밋과 워킹 디렉토리 간의 차이를 나열한다.<br>
+git diff HEAD HEAD ~1 : (~1 = -1 개념) HEAD가 가리키는 가장 최신의 커밋과 이전 커밋을 비교한다.<br>
**git diff --cached** / **git diff --staged** : 스테이지에 등록된 변경사항만 나열한다<br>
**git diff (HEAD, --cached) +file.xxx** : file.xxx 의 변경사항만 볼 수 있다. **(범위를 좁힐 수 있다.)**<br>
**git diff branch1(a)..(혹은 공백)branch2(b)** : branch1과 branch2를 비교 (여러개 할 수 있음 ++c +++d ..)<br>
+file.xxx : 비교할 때 특정 file만 비교<br>
**git diff commithash1..(혹은 공백)commithash2** : commit1과 commit2를 비교 (branch와 마찬가지로 여러개 가능)

<br>

>**git stash (save)** : Working Directory, Staging Area에 있는 commit하지 않은 변경사항들을 임시 저장하고 불필요한 commit으로 이력이 log이 지저분해지는 것 없이 나중에 돌아올 수 있게 해준다.<br>
branch switch를 하고 싶은데 작업한 내역들이 있어 switch할 수 없을 때 
작업한 내역이 이동하는 branch까지 따라와서 적용되는 것을 원치 않을 때
commit하고 싶지 않거나 commit할 준비가 되지 않았을 때 사용할 수 있다.<br>
**git stash pop** : 가장 최근의 stash를 적용하고 stash에서 **삭제한다.**<br>
**git stash apply** : 가장 최근의 stash를 적용한다. <br>
**git stash list** : 가장 최근의 commit, stash id와 함께 stash list를 보여준다.
```
stash@{0}: WIP on rainbow: ae391d9 remove background color
stash@{1}: WIP on rainbow: ae391d9 remove background color
stash@{2}: WIP on rainbow: ae391d9 remove background color
stash@{3}: WIP on goodbye: 5a44b5d create index.html and app.css
```
stash할 때 마다 stash들은 순서대로 보관된다.
stash@{n}(stash id)로 특정 stash를 참조할 수 있다.<br>
**git stash drop stash@{n}** : 특정 stash를 삭제한다.<br>
**git stash clear** : stash에 있는 모든 것들을 없앤다.

<br>
<br>

```
Udemy Git & Github 실무 활용 완벽 가이드를 들으며 배운 내용 정리입니다.
```