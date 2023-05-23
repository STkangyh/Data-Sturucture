template<class T>
void CircularList<T>::InsertFront(const T& e){
    // 원형 리스트 *this의 앞에 원소 e를 삽입
    // last는 리스트의 마지막 노드를 가리킴
    ChainNode<T>* newNode = new ChainNode<T>(e);
    if (last) // 리스트가 공백이 아닐때
    {
        newNode->link=last->link;
        last->link = newNode;
    }
    else {
        last = newNode;
        newNode->link = newNode;
    }
}