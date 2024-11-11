### 내용
- app 에서 ioctl 명령어를 이용하여, 3번, 4번, 5번 신호를 Device Module에게 전달한다.
- Device Module은 3번, 4번, 5번 신호에 따라 커널로그를 달리 출력한다.

### 코드 실행방법
먼저 Device File을 수동으로 생성한다.
```
sudo mknod /dev/nobrand c 100 0
sudo chmod 666 /dev/nobrand
```

이후 Kernel Object를 Kernel에 삽입한다.
```
sudo insmod ./nobrand.ko
```

이제 App을 실행한다.
```
./app
```

끝난 이후에는 Kernel Object를 제거한다.
```
sudo rmmod nobrand
```
