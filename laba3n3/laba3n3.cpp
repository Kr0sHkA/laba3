#include <iostream>
#include <cmath>

//Лабораторная работа №3 "Ветвящийся вычислительный процесс"

using namespace std;

// Создание функции в которую мы будем передавать числа, для дальнейшей обработки
double f(double a, double b, double x)
{
	if (x <= 10) return pow((x*x + 2*x + 1), 1/3.);
	else if (x <= 15) return ((1 / ((x * x * x) + 2)) + b);
	return ((x * x) - a * x);
}

int main() {
	// Русификатор
	setlocale(LC_ALL, "ru");
	// Ввод значения "х"
	cout << "Введите значение х: ";
	double a = 0.004, b = 42, x;
	cin >> x;
	// Вывод значения функции при заданном "х"
	cout << "f(" << x << ")=" << f(a, b, x) << "\n";
	return 0;
}