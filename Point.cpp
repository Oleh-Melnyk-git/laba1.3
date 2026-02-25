#include "Point.h"

// Методи доступу
double Point::getX() { return x; }
double Point::getY() { return y; }
void Point::setX(double value) { x = value; }
void Point::setY(double value) { y = value; }

// Init
void Point::Init(double xVal, double yVal) {
  x = xVal;
  y = yVal;
}

// Read
void Point::Read() {
  cout << "Введіть координату x: ";
  cin >> x;
  cout << "Введіть координату y: ";
  cin >> y;
}

// Display
void Point::Display() { cout << "Точка: (" << x << ", " << y << ")" << endl; }

// toString
string Point::toString() {
  return "(" + to_string(x) + ", " + to_string(y) + ")";
}

// Перетворення у полярні координати
void Point::toPolar() {
  double r = sqrt(x * x + y * y);
  double phi = atan2(y, x);
  cout << "Полярні координати: r = " << r << ", φ = " << phi << endl;
}

// Відстань до початку координат
double Point::distance() { return sqrt(x * x + y * y); }

// Порівняння
bool Point::equals(Point other) {
  return (this->x == other.x && this->y == other.y);
}
