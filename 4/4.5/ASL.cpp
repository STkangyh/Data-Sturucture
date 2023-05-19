template<class T>
ChainNode<T>* CircularList<T>::getNode(){
    ChainNode<T>* x;
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