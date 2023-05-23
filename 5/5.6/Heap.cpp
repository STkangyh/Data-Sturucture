//우선순위 큐
template<class T>
class MaxPQ{
public:
    virtual ~MaxPQ(); // 가상 파괴자
    virtual boolIsEmpty() const = 0; // 우선순위 큐가 공백이면 true를 반환
    virtual const T& Top() const = 0; // 최대 원소에 대한 참조를 반환
    virtual void Push(const T&) = 0; // 우선순위 큐에 원소를 삽입
    virtual void Pop() = 0; // 최대 우선순위를 가진 원소를 삭제
}