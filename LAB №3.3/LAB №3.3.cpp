// Lab_03_3.cpp
// < Чучман Володимр >
// Лабораторна робота № 3.3
// Розгалуження, задане графіком функції.
// Варіант 26

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double x; // вхідний аргумент
    double R; // вхідний параметр
    double y; // результат обчислення виразу
    cout << "R = "; cin >> R;
    cout << "x = "; cin >> x;

    if (x <= -5)
        y = -3;
    else
        if (x > -5 && x <= -R)
            y = (3 * R + 3 * x) / (-R + 5);
        else
            if (x > -R && x <= R)
                y = (sqrt(R * R) - (x * x));
            else
                if (x > R && x <= 8)
                    y = x;
                else
                    y = R;
    cout << endl;
    cout << "y = " << y << endl;
    cin.get();
    return 0;
}
