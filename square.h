#ifndef square
#define square
#include <bits/stdc++.h>
using namespace std;

class Square : public Figura{
public:
    Square():Figura(){};
    Square(int b): Figura(b, b){
        this->setArea(b*b);
    }
};

#endif