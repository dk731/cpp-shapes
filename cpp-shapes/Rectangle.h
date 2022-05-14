#pragma once
#include "Shape.h"
#include <iostream>

class Rectangle :
    public Shape
{
public:
    Rectangle(float w, float h);

    void display() override;
    void draw() override;

private:
    float w, h;
};

