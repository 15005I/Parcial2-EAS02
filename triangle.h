#ifndef triangle
#define triangle
#include <bits/stdc++.h>
using namespace std;

class Triangle : public Figura{
public:
    Triangle():Figura(){};
    Triangle(int b): Figura(b, h){
        this->setArea(b*h/2);
    }
};

#endif