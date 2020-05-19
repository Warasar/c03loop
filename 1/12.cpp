#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int n, i;
	float a;
	a = 0;
	for (i=1; i <= 10; i++)
	{
		cin >> n;
		a = a + n;
	}
	a = a / 10;
	cout << a;
}