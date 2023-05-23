template<class T>
void Tree<T>::LevelOrder(){
    //이진 트리의 레벨 순서 순회
    //루트 방문->왼쪽 자식 방문->오른쪽 자식 방문
    Queue<TreeNode<T>*> q;
    TreeNode<T>* currentNode = root;
    while(currentNode){
        Visit(currentNode);
        if(currentNode->leftChild)
            q.Push(currentNode->leftChild)
        if(currentNode->rightChild)
            q.Push(currentNode->rightChild)
        if(q.IsEmpty())
            return;
        currentNode = q.Front()
        q.Pop();
    }
}