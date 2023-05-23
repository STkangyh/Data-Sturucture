template<class K, class E>
class Dictionary{
public:
    virtual bool IsEmpty() const = 0; // 공백이면 true 반환
    virtual pair<K,E>*get(const K&) const = 0; // 지시한 키 값을 가진 쌍에 대한 포인터 반환, 없으면 0 반환
    virtual void Insert(const pair<K,E>&) = 0; // 쌍을 삽입, 키가 중복되면 관련 원소 갱신
    virtual void Delete(const K&) = 0; // 지시된 키를 가진 쌍 삭제
}

template<class K, class E>
pair<K,E>* BST<K,E>::get(const K& k){
    // 키 k를 가진 쌍을 이원 탐색 트리(*this)에서 탐색
    // 쌍을 발견하면 포인터 반환, 아니면 0 반환
    return get(root, k);
}

template<class K, class E>
pair<K,E>* BST<K,E>::get(TreeNode<pair<K,E>> *p, const K& k){
    if(!p) return 0;
    if(k<p->data.first) return get(p->leftChild, k);
    if(k>p->data.first) return get(p->rightChild, k);
    return &p->data;
}

// 순위에 의한 탐색
template<class K, class E>
pair<K,E>* BST<K,E>::Rankget(int r){
    // r번째 작은 쌍을 탐색한다
    TreeNode<pair<K,E>> *currentNode = root;
    while(currentNode){
        if(r<currentNode->leftSize)
            currentNode = currentNode->leftChild;
        else if(r>currentNode->leftSize){
            r -= currentNode->leftSize;
            currentNode = currentNode->rightChild;
        }
        else return &currentNode->data;
    }
    return 0;
}