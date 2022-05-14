#pragma once
#include "Shape.h"

#include <iostream>

class Square :
    public Shape
{
public:
    Square(float s);

    void display() override;
    void draw() override;

private:
    float s;
};

