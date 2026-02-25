#include "Point.h"

int main() {
  Point a, b;

  // Використання Init
  a.Init(3.0, 4.0); // одразу задаємо координати
  cout << "Перша точка через Init: ";
  a.Display();
  cout << "Відстань до початку координат: " << a.distance() << endl;
  a.toPolar();

  // Введення другої точки через Read
  cout << "\nВведіть координати другої точки:" << endl;
  b.Read();
  b.Display();

  // Перевірка на рівність
  if (a.equals(b))
    cout << "Точки a та b рівні." << endl;
  else
    cout << "Точки a та b не рівні." << endl;

  return 0;
}
