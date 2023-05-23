class ThreeLetterNode{
private:
    char data[3];
    ThreeLetterNode* link;
}

class NodeA{
private:
    int data1;
    char data2;
    float data3;
    NodeA* linka; // 자기 데이터(NodeA)를 가리키는 포인터
    NodeA* linkb; // 다른 데이터(NodeB)를 가리키는 포인터
};

class NodeB{
private:
    int data;
    NodeB* link;
}

class THreeLetterChain{
public:
    //데이터 조작 연산 함수
private:
    class ThreeLetterNode{
    public:
        char data[3];
        ThreeLetterNode* link;
    }
    ThreeLetterNode* first;
}