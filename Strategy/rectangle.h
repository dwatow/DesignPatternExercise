#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "shape.h"

class rectangle : public shape
{
    int m_xSide;
    int m_ySide;
    const m_type;
public:
    rectangle(int xSide, int ySide):m_xSide(xSide), m_ySide(ySide), m_type(ST_RECT)
    {};

    int GetArea()
    { 
        return m_xSide * m_ySide; 
    }

    std::string GetType()
    {
        return "矩形";
    };

};

#endif