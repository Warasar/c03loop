/*
Напишите программу, которая вводит
с клавиатуры вещественное x (используйте тип double), вычисляет

для данного x частичную сумму ряда (*), в которой участвуют толь-
ко те слагаемые, которые не меньше 0.0001 (слагаемые монотонно

убывают), и выводит модуль разности между вычисленной суммой
и значением библиотечной функции exp(x) из заголовочного файла
cmath/math.h (вывести не менее 6 знаков после десятичной точки).
*/

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
	int i = 1, b = 1;
	double fac = 1, x, sum = 1, check;

	cin >> x;
	while (i == b) {
		check = 0;
		for (int a = 1; a < i + 1; a++) {
			fac *= a;
		}
		check = pow(x, i) / fac;
		if (check >= 0.0001) {
			sum += pow(x, i) / fac;
			b++;
		}
		fac = 1;
		i++;

	}
	cout << fixed;
	cout.precision(6);
	cout << abs(sum - exp(x)) << endl;
}