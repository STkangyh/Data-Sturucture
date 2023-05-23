// 체인 연산에는 삽입, 삭제, 기타 조작 연산이 필요
// last는 리스트의 마지막 노드를 가리킨다
// 리스트의 뒤에 노드를 삽입
template<class T>
void Chain<T>::InsertBack(const T& e){
    if(first){
        last->link = new ChainNode<T>(e);
        last = last->link;
    }
    else
        first = last = new ChainNode<T>(e);
}