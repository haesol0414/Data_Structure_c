

/**
Data_Structure_c
자료구조 (c언어.ver)
**/



// *** 1 Week ***
/**
- cpu는 단위시간에 한 개의 명령어만 처리할 수 있다
- 메인 메모리는 1차원적으로 메모리 공간이 할당되어 자료를 처리한다.


- 자료구조의 종류
: 배열, 연결리스트(링크드리스트), 스택, 큐, 트리, 그래프
- 배열은 정적할당, 연결리스트는 동적할당이라는 특징이 있다.


- 하나의 프로그램은 자료구조와 알고리즘으로 이루어져 있다고 할 수 있다.
- 프로그램 = 자료구조 + 알고리즘
- 알고리즘(algorithm)의 조건
1. 입력 : 0개 이상의 입력이 존재하여야 한다
2. 출력 : 1개 이상의 출력이 존재하여야 한다.
3. 명백성 : 각 명령어의 의미는 모호하지 않고 명확해야 한다.
4. 유한성 : 한정된 수의 단계 후에는 반드시 종료되어야 한다.
5. 유효성 : 각 명령어들은 실행 가능한 연산이어야 한다.


- 자료형 : '데이터의 종류'
 기초 자료형 : chatr, int, float, double ...
 파생 자료형 : 배열, 포인터
 사용자 정의 자료형 : 구조체, 공용체, 열거형


- 추상 데이터 타입 (ADT : Abstract Data Type)
  데이터 타입을 추상적으로 정의한 것
  데이터나 연산이 무엇(what)인가는 정의되지만, 데이터나 연산을 어떻게(how)구현할 것인지는 정의되지 않는다.
  추상화(abstraction) -> 정보 은닉 기법(information hiding) -> 추상 자료형(ADT)
  추상화란, 사용자에게 중요한 정보는 강조되는 반면 중요하지 않은 구현 세부 사항은 제거하는 것이다.
  사용자들은 ADT가 제공하는 연산만을 사용할 수 있고, ADT 내부의 데이터를 접근할 수 없다.
  따라서 사용자들은 ADT가 어떻게 구현되는지 모르더라도 ADT를 사용할 수 있다.
  객체 : 추상 데이터 타입에 속하는 객체가 정의된다.
  연산 : 객체들 사이의 연산이 정의된다. 이 연산은 추상 데이터 타입과 외부를 연결하는 인터페이스의 역할을 한다.
**/



