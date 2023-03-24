#include<iostream>

class Rectangle
{
private:
    int xLow, yLow, height, width;
public:
    Rectangle(int x, int y, int h, int w);
    int GetHeight();
    int GetWidth();
};



Rectangle::Rectangle(int x, int y, int h, int w){
    xLow=x;
    yLow=y;
    height=h;
    width=w;
}


Rectangle::Rectangle (int x = 0, int y = 0, int h = 0, int w = 0)
    :xLow(x), yLow(y), height(h), width(w) //default 값 제공,  데이터 멤버들이 멤버 초기화 리스트에 의해 초기화
{}

int main(){
    Rectangle r(1,3,6,6);
    Rectangle *s = new Rectangle(0,0,3,4);
    Rectangle t;    //컴파일 시간 오류-> default 생성자 필요(a default constructor : a constructor with no argument)
}

bool Rectangle::operator == (const Rectangle &s){
    if (this == &s) return true;    // 두 피연산자가 동일 객체이면 결과는 true
    if ((xLow == s.xLow) && (yLow == s.yLow)    // 데이터 멤버를 개별적으로 비교하여 모두 동일하면 결과는 true
    && (height == s.height) && (width==s.width)) return true;
    else return false;  // 아니면 결과는 false 
}

ostream& operator << (ostream& os, Rectangle& r)
{
    os << "Position is: " << r.xLow << " ";
    os << r.yLow < endl;
    os << "Height is: " << r.height << endl;
    os << "Width is: "<< r.width << endl;
    return os;
}

