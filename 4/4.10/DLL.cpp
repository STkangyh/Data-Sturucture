class DblList;
class DblListNode{
friend class DblList;
private:
    int data;
    DblListNode *left, *right;
};

class DblList{
public:
    // data control functions
private:
    DblListNode *first; // 헤더 노드를 가리킴
}

void DblList::Delete(DblListNode *x){
    if (x==first)
    {
        throw "Deletion of header node not permitted";
    }
    else{
        x->left->right = x->right; // 삭제하는 노드의 앞 노드의 right 노드
        x->right->left = x->left; // 삭제하는 노드의 앞 노드의 left 노드
        delete x;
    }
}

void DblList::Insert(DblListNode *p, DblListNode *x){
    //노드 x의 오른편에 노드 p 삽입
    p->left = x;
    p->right = x->right;
    x->right->left = p;
    x->right = p;
}