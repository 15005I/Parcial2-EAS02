#include <bits/stdc++.h>
#include "square.h"
#include "rectangle.h"
#include "triangle.h"
using namespace std;

class Figura{
private:
    int b, h;
    float a;

public:
    Figura();
    Figura(int b, int h);
    void setArea(float a);
    float getArea();
};

Figura::Figura(){
    b = 0;
    h = 0;
}

Figura::Figura(int base, int altura){
    b = base;
    altura = h;
}

void Figura::setArea(float a){
    a = a;
}

float Figura::getArea(){
    return a;
}

int main () {

    Square s(5);
    cout << s.getArea() << endl; // 25
    Rectangle r(5,5);
    cout << r.getArea() << endl; // 25
    Triangle t(5, 10);
    cout << t.getArea() << endl; // 25
    return 0;
}