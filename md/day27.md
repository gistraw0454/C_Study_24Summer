# 2차원 배열 예제 및 실습
## 이중 for문 (nested for)
```
for (초기식; 조건식; 증감식){   ---A반복문
    실행문장;
    for(초기식; 조건식; 증감식){    ---B반복문
        실행문장;
    }
    실행문장;
}
```
- A 반복문은 안에 작성된 문장이 모두 끝나야 다음 반복으로 넘어가기 때문에,
- B 반복문은 A반복 횟수만큼 초기식으로 돌아간다.

- 실행문장1 : A반복문의 매 반복마다 처음으로 실행되는 문장
- 실행문장2 : A반복문의 매 반복마다 B반복문이 처음부터 다시 시작되고, A반복횟수*B반복횟수 만큼 실행됨.
- 실행문장3 : B반복문이 끝날때 마다 실행되는 문장
