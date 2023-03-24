class Polynominal;
class term{
    friend Polynomial;
private:
    float coef; // 계수
    int exp; // 지수 
}
class Polynominal{
private:
    Term *termArray; // 0이 아닌 항의 배열
    int capacity; // termArray의 크기
    int terms; // 0이 아닌 항의 수
}

void Polynomianl::NewTerm(const float the Coeff, const int the Exp){ //에 새로운 항을 termArray 끝에 첨가
    if(terms==capacity){
        //termArray의 크기를 두 배로 확장
        capacity *= 2;
        term *temp = new term [capacity];   //새로운 배열
        copy(termArray, termArray+terms, temp);
        delete [] termArray;    //그전 메모리 반환
        termArray = temp;
    }
    termArray[term].coef = theCoef;
    termArray[terms++].exp = theExp;
}