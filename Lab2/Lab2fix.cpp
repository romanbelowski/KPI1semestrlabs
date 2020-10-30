// Числа а і b виражають довжини катетів одного прямокутного трикутника, а с і d – ншого. З’ясувати, чи є ці трикутники подібними.
#include <iostream>

using std::cout;
using std::cin;
using std::endl;
int main()
{
    setlocale(LC_ALL, "Russian");
    // Об'ява змінних
    float a_cathetus;
    float b_cathetus;
    float c_cathetus;
    float d_cathetus;
    bool Bool;
    // Введення змінних
    cout << "Input the first cathetus of triangle number 1: ";
    cin  >> a_cathetus;
    cout << "Input the second cathetus of triangle number 1: ";
    cin  >> b_cathetus;
    cout << "Input the first cathetus of triangle number 2: ";
    cin  >> c_cathetus;
    cout << "Input the second cathetus of triangle number 2: ";
    cin  >> d_cathetus;
    // Перевірка
    if ((a_cathetus / c_cathetus == b_cathetus / d_cathetus) || (a_cathetus / d_cathetus == b_cathetus / c_cathetus)) {
      // якщо твердження правильне, то присвоєння True
      Bool = true;
   } else {
      // якщо твердження неправильне, то присвоєння False
      Bool = false;
   }
    cout << "bool:\t" << Bool << endl;
    return 0;
}