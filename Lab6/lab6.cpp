// Варіант 35

#include <iostream>

// Прототипи функцій.

// Прототип функції, що обчислює корінь 5 степені.
double fifth_root(double x, int n);

// Головна функція.
int main() {
  double a, b;
  int n;

  // Ввід a, b.
  std::cout << "Input a, b:" << std::endl;
  std::cin >> a >> b;

  if (a <= 0 || b <= 0) {
    std::cerr << "Error: a and b must be higher than 0" << std::endl; 
    return 1;
  }
  // Ввід n.
  std::cout << "Input n:" << std::endl;
  std::cin >> n;
  
  // Перевірка на натуральність n.
  if (n < 1) {
    std::cerr << "Error: n must be higher than or equal to 1" << std::endl;
    return 2;
  }

  double sum = fifth_root(fifth_root(a * b, n), n) + fifth_root(a, n); // Сумa. 

  std::cout << "Sum is " << sum << std::endl;

  return 0;
}

// Визначення функцій.

// Функція, що обчислює суму елементів арифметичної прогресії.
double fifth_root(double x, int n) {
  double z = x;
  for (int step = 0; step < n; step++) {
    z = (1.0/5.0) * (x / (z*z*z*z) + 4 * z); // Розрахунок Zn+1
  }
  return z;
}
