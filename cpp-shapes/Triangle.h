#pragma once
#include "Shape.h"

#include <iostream>

class Triangle :
    public Shape
{
public:
    Triangle(float e1, float e2, float e3);

    void display() override;
    void draw() override;

private:
    float e1, e2, e3;
};

