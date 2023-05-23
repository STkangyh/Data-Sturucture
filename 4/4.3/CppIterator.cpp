//배열 반복자 이용
void main(){
    int x[3] = {0,1,2};
    //배열 x에서 반복을 하기 위해 포인터 y를 사용
    for (int* y=x; y!=x+3; y++)
        std::cout<<*y<<" ";
    std::cout<<endl;
}

// STL에 있는 copy함수 이용

template<class Iterator>
void copy(Iterator start, Iterator end, Iterator to){
    //[start, end]에서 [to, to+end-start까지 복사]
    while (start!=end){
        *to = *start;
        start++;
        to++;
    }
}