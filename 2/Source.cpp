/*
�������� ���������, ������� ������ � ���������� ����� n �� 1 �� 20
������������ � �������� �������� �� ������� � �������� ������ n,
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
