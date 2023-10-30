# DS_Project_2_2023_2
### 2023-2 Data Structure Project #2

### Due date:  2023/11/16 23h 59m 59s.

#### 본 프로젝트는 도서 대출 관리 프로그램을 구현하는 것으로 상세한 설명은 프로젝트 문서와 다음 설명을 참고한다.
##### 본 프로젝트에서는 B+-Tree, 선택 트리(Selection Tree), 힙(Heap)을 이용해 도서 대출 관리 프로그램을 구현한다. 대출 관리 프로그램은 도서명, 도서 분류 코드, 저자, 발행 연도, 대출 권수를 관리하며, 이를 이용해 대출 중인 도서와 대출 불가 도서에 대한 정보를 제공할 수 있다. B+-Tree를 이용하여 대출 중인 도서를 관리하며, 선택 트리를 이용하여 대출 불가 도서를 관리한다.

![image](https://github.com/DSLDataStorage/DS_Project2_2023_2/assets/50433145/3f737fa4-7365-42ab-abc8-6dd3298120c1)

## <u>**Notice**</u>
### Notice !! 윈도우에서 리눅스로 단순 파일 복사 및 드래그는 파일 인코딩 변환 문제가 발생 할 수 있으니 반드시 리눅스 환경에서 파일을 재생성 후 테스트 바랍니다.
### Notice !!설계와 실습을 모두 수강하시는 분은 실습 과제제출란에만 제출바랍니다.

--------------------------

### 1. 프로젝트 문서 및 소스코드 수정사항
#### [2023_DS_Project2_v2.pdf](https://github.com/DSLDataStorage/DS_Project_2_2023_2/files/13200095/2023_DS_Project2_v2.pdf)

```
10/30 - ver2 업로드 (보고서 채점 기준 변경 및 loan_book.txt 개행문자 명시
10/12 - ver1 업로드
```

### 2. 자주들어오는 질문 

**Q. command.txt와 loan_book.txt는 제공하지 않나요?**

A. 네. 따로 제공하지 않습니다.

--------------------------
### Knowledge 
##### 아래 명령어 예시에서 앞의 $ 로 시작되는 부분은 명령어 입력 부분이고, 그 외 는 출력 부분임
##### 리눅스 명령어 요약
1. ls  :  list로 현재 작업중인 디렉토리의 파일 및 포함된 디렉토리 목록들을 표시 ( -a, -l 속성으로 자세한 출력 가능)
2. pwd  :  print working directory로 현재 작업중인 디렉토리의 절대경로 위치 출력
3. cd  : change directory로 디렉토리 를 변경( . : 현재 디렉토리, .. : 상위 디렉토리 ) 
```
$ ls
Documents Download
$ ls -l
drwxr-xr-x 2 user user     4096 Oct 05  2020 Documents
drwxr-xr-x 2 user user     4096 Oct 05  2020 Downloads
$ pwd
/home/user
$ cd Download
$ pwd
/home/user/Downloads
```

### requirement
##### 먼저 해당 github에 저장되어 있는 base 코드를 다운받는다.
```
$ sudo apt-get install git
$ git clone https://github.com/DSLDataStorage/DS_Project_2_2023_2.git
```

### how to compile this project
##### make명령어 실행 후 ls명령어를 통해 해당 디렉토리를 확인해 보면 run 이라는 파일이 생긴것을 확인 할 수 있다. 
```
$ make
g++ -std=c++11 -g -o run *.cpp *.h

```
### how to run code
##### ./(생성된 실행파일) 의 형식으로 생성된 run 실행파일을 실행한다.
##### 실행하면 결과로 log.txt파일이 생성되면서 결과가 log.txt에 저장된다. 
```
$ ./run
$ cat log.txt
==> command 1) LOAD
Success
```
