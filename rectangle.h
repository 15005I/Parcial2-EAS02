#ifndef rectangle
#define rectangle
#include <bits/stdc++.h>
using namespace std;

class Rectangle : public Figura{
public:
    Rectangle():Figura(){};
    Rectangle(int b, int h): Figura(b, h){
        this->setArea(b*h);
    }
};

#endif