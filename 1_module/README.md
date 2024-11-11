### 코드 내용
커널 모듈이 삽입되면 HELLO 커널 로그가 뜬다.
커널 모듈에 제거되면 BYE 커널 로그가 뜬다.

### 출력결과
![image](https://github.com/user-attachments/assets/91fb70de-d005-49ea-a388-b9324d58d630)

### 실행방법
```
make
sudo insmod hi.ko
sudo rmmod hi
```

### 커널로그 확인방법
새로운 터미널 창을 하나 더 띄운 후, 다음 명령어를 수행한다.
```
dmesg -w
```
