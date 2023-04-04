// 소스화일 main.cpp 속에
#include <iostream>
#include "Rectangle.h"
using namespace std;

int main() {
    Rectangle r, s; // r과 s는 Class Rectangle의 객체들이다.
    Rectangle *t = &s; // t는 클래스 객체 s에 대한 포인터이다.
    
    // 클래스 객체의 멤버를 접근하기 위해서는 점(.)을 사용한다.
    // 포인터를 통해 클래스 객체의 멤버를 접근하기 위해서는 ->를 사용한다.
    if (r.GetHeight() * r.GetWidth() > t->GetHeight() * t->GetWidth())
        cout << " r ";
    else cout << " s ";
    cout << "has the greater area" << endl;
}