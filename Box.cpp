#include "Box.h"
#include <iostream>
// Implement setters and getters
void Box::setLength(float l)
{
  length=l;
}

void Box::setWidth(float w)
{
  width=w;
}

void Box::setHeight(float h)
{
  height=h;
}

int Box::getLength()
{
  return length;
}

int Box::getWidth()
{
  return width;
}

int Box::getHeight()
{
  return height;
}

// Implemenet the calcVolume() unction
int Box::calcVolume() 
{
  return length*width*height;
}
