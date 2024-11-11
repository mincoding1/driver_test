### 내용
디바이스 파일을 수동으로 만든다.
App에서 Kernel Module을 호출한다.

### 실행결과
1. driver를 insmod 한다.
2. app을 2회 실행한다.
 - User 화면에는 "GO"가 출력된다.
 - Kernel Log에는 "welcome / release"가 출력된다.
3. driver를 rmmod 한다.
![image](https://github.com/user-attachments/assets/de13ed97-c2d5-4682-ac06-93bc77060f3c)

### 실행하기 전 세팅
디바이스 파일을 수동으로 제작한다.
```
sudo mknod /dev/nobrand c 100 0
sudo chmod 666 /dev/nobrand
```

### 실행방법
```
make
sudo insmod ./nobrand.ko
./app
./app
sudo rmmod nobrand
```
