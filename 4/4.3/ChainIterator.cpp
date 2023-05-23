int x = std::numberic_limits<int>::min(); //초기화 단계
for each item in C{ //for C의 각 원소에 대해
    currentItem = current item of C; // 현재 원소 저장
    x = max(currentItem, x); // 최대 크기 원소 저장
}
return x; // 후처리

/* 컨테이너 클래스의 멤버 함수로 연산 구현 시 단점
Chain<T>는 템플릿 클래스로, 그의 모든 연산은 T가
인스턴스화되는 객체의 타입과는 독립적이어야 한다.
즉, 연산이 int, char, double, boolean에 관계없이
모두 연산 가능해야 한다는 것. 
그래서 지원하는 연산이 매우 많아서 클래스 정의가 더러움
그리고 컨테이너 클래스의 원소를 일정한 순서로 
배열하는 방법을 배워야 한다. 
객체의 원소들에 대한 체계적 접근을 제공하는 반복자 필요*/
 