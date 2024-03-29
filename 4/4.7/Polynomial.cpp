struct Term{
    int coef;
    int exp;
    Term Set(int coef, int exp){
        this->coef = coef;
        this->exp = exp;
        return *this;
    }
}

class Polynomial{
public:
    // common functions
private:
    Chain<Term> poly;
}

Polynomial Polynomial::operator+(const Polynomial& b) const{
    Term temp;
    Chain<Term>::ChainIterator ai = poly.begin(), bi = poly.begin();
    Polynomial c;
    while(ai&&bi) { // current nodes are not null
        if (ai->exp == bi->exp)
        {
            int sum = ai->coef + bi->coef;
            if (sum)
            {
                c.poly.InsertBack(temp.Set(sum, ai->exp));
            }
            ai++; bi++; //advance to next term
        }
        else if (ai->exp < bi->exp)
        {
            c.poly.InsertBack(temp.Set(bi->coef, bi->exp));
            bi++;
        }
        else {
            c.poly.InsertBack(temp.Set(ai->coef, ai->coef));
            ai++;
        }    
    }
    while(ai){ //copy rest of a
        c.poly.InsertBack(temp.Set(ai->coef, ai->exp));
        ai++;
    }
    while(bi){
        c.poly.InsertBack(temp.Set(bi->coef, bi->exp));
        bi++;
    }
    return c;
}