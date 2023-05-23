Matrix::~Matrix(){
    //모든 노드를 av 리스트로 반환. 이 리스트는 right field로 연결된 체인
    //av는 av 리스트의 첫번째 노드를 가리키는 정적 변수

    if(!headnode) // headnode가 0이면 예외처리. 삭제할 노드가 없음.
        return;
    Matrix *x = haednode->right; // 헤더 노드가 가리키는 오른쪽 노드를 x로 저장
    headnode->right = av; av = headnode; // 헤더 노드가 가리키는 오른쪽 노드를 av로 바꾸고, av 리스트가 가리키는 것을 헤더 노드로 바꿈. 첫번째 av 리스트가 헤더 노드가 된 상태.
    while(x!=headnode){ // x 포인터가 헤더 노드를 가리킬 때까지 반복
        MatrixNode *y = x->right; // y는 x가 가리키는 right 저장.
        x->right = av; // x가 가리키는 right를 av로 바꾼다.
        av = y; // 새로운 av 리스트의 첫번째가 y포인터가 됨. 
        x = x->next; // 다음 행
    }
    headnode = 0; //sparse matrix가 null이 됨.
}