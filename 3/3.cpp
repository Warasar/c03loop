/*
Напишите программу,которая вводит с клавиатуры целое число типа long long
(в scanf указывать кодформата %lld) и выводит его цифры в обратном порядке.
*/

#include <iostream>

using namespace std;

int main() {
	long long n;
	int i = 0, arr[100];
	cin >> n;
	while (n > 0) {
		arr[i] = n % 10;
		n /= 10;
		i++;
	}
	for (int a = 0; a < i; a++) {
		cout << arr[a];
	}
}