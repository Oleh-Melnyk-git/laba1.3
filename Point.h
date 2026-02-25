#ifndef POINT_H
#define POINT_H

#include <cmath>
#include <iostream>
#include <string>
using namespace std;

class Point {
private:
  double x;
  double y;

public:
  // Методи доступу
  double getX();
  double getY();
  void setX(double value);
  void setY(double value);

  // Обов'язкові методи за методичкою
  void Init(double xVal, double yVal); // Ініціалізація
  void Read();                         // Введення з клавіатури
  void Display();                      // Виведення на екран
  string toString();                   // Перетворення у рядок

  // Математичні методи
  void toPolar();              // Перетворення у полярні координати
  double distance();           // Відстань до початку координат
  bool equals(Point other);    // Перевірка на рівність
  bool notEquals(Point other); // Перевірка на нерівність
};

#endif
