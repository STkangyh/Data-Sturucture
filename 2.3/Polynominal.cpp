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

void Polynomianl::NewTerm(const float theCoeff, const int theExp){ //에 새로운 항을 termArray 끝에 첨가
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
Polynomial Polynominal::Add(Polynomial b) {
    //Return the sum of the polynomials *this and b
    Polynomial c;
    int aPos=0, bPos=0;
    while((aPos < terms)&&(bPos < b.terms)){
        if((termArray[aPos].exp == b.termArray[bPos].exp)) {
            float t = termArray[aPos].coef + b.termArray[bPos].coef;
            if (t) {
                c.NewTerm(t, termArray[aPos].exp);
                aPos++;
                bPos++;
            }
        }
        else if ((termArray[aPos].exp)<b.termArray[bPos].exp){
            c.NewTerm(b.termArray[bPos].coef, b.termArray[bPos].exp);
            bPos++;
        }
        else {
            c.NewTerm(termArray[aPos].coef, termArray[aPos].exp);
            aPos++;
        }
        //add in remaining terms of *this
        for(;aPos<terms;aPos++)
            c.NewTerm(termArray[aPos].coef,termArray[aPos].exp);
        //add in remaining terms of b(x)
        for(;bPos<b.terms;b++)
            c.NewTerm(b.termArray[bPos].coef, b.termArray[bPos].exp);
        return c;
    }
};