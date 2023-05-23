template<class T>
T* ThreadInorderIterator::Next(){
    //스레드 이진 트리에서 currentNode의 중위 후속자를 반환
    ThreadNode<T> *temp = currentNode->rightChild;
    if(!currentNode->rightThread){
        while(!temp->rightThread)
            temp = temp->leftChild;
    }
    currentNode = temp;
    if(currentNode==root)
        return 0;
    else
        return &currentNode->data;
}