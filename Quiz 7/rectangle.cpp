#include <iostream>
#include "coordinate.hpp"
#include "rectangle.hpp"

using namespace std;

Coordinate Rectangle::getLB() const {
  return lb;
}

Coordinate Rectangle::getRT() const {

  return rt;
}

double Rectangle::getArea() {

  return area;
}

Coordinate Rectangle::getCenter() {

  return center;
}

void Rectangle::setLBRT(Coordinate lbval, Coordinate rtval) {

  lb = lbval;
  rt = rtval;

  area = ((rt.getX() - lb.getX()) * (rt.getY() - lb.getY()));

  double c1 = (rt.getX() + lb.getX())/2;
  double c2 = (rt.getY() + lb.getY())/2;
  center.setXY(c1,c2);
}

void Rectangle::printRectangle() const {

  cout << "Bottom left point: " << endl;
  lb.printXY();
  cout << "Top right point: " << endl;
  rt.printXY();
  cout << "The center point coordinate: " << endl;
  center.printXY();
  cout << "Area value: " << area << endl;
}