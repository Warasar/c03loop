/*
Напишите программу, которая вводит с клавиатуры число n от 1 до 20
включительно и печатает пирамиду из решеток и пробелов высоты n,
*/

#include <iostream>

using namespace std;

int main() {
	int n,b=1;
    cin >> n;
	for(int i=n;i>0;i--){
		for(int j=i;j>1;j--){
			cout << ' ';
		}
		for(int a=0;a<b;a++){
			cout << "#";
		}
		b+=2;
		cout << endl;
	}
}
