template<class T>
ChainNode<T>* CircularList<T>::getNode(){
    ChainNode<T>* x; //사용할 노드 생성
    if (av)
    {
        x = av;
        av = av->link;
    }
    else
        x = new ChainNode<T>;
    return x;
}

template<class T>
void CircularList<T>::retNode(ChainNode<T>* &x){
    // x가 가리키는 노드 반환
    x->link = av;
    av = x;
    x = 0;
}

//원형 리스트의 삭제
template<class T>
void CircularList<T>::~CircularList(){
    if (last) {
        ChainNode<T>* first = last->link;
        last->link = av; // 마지막 노드가 av에 연결
        av = first; // 리스트의 첫번째 노드가 av 리스트의 첫번째 노드가 됨
        last = 0;
    }
}