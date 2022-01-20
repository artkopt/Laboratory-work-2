#include <iostream>
#include <vector>
#include <clocale>

using namespace std;

int ArrNum(int n) {
	int j;
	cout << "Введите " << n + 1 << " число: ";
	cin >> j;
	return(j);
}
vector <int> input(int k) {
	vector <int> b(k);
	for (int i = 0; i < k; i++) {
		b[i] = ArrNum(i);
	}
	return(b);
}
void output(vector <int> n, int k) {
	for (int i = 0; i < k; i++) {
		cout << n[i] << " ";
	}
}
int ch() {
	int check;
	cout << "Введите заданное значение: ";
	cin >> check;
	return(check);
}
void DataProc(vector <int> n, int k) {
	int c = ch();
	for (int i = 0; i < k; i++) {
		for (int j = i + 1; j < k; j++) {
			if (n[i] + n[j] == c) {
				cout << "Ваша пара чисел: " << "(" << n[i] << " , " << n[j] << ")" << endl;
			}
		}
	}
}

int main() {
	setlocale(LC_ALL, "Russian");

	//Ввод данных. Задаём размер массива.
	int n;
	cout << "Размер массива: ";
	cin >> n;
	vector <int> a(n); // объявляем массив размером n

	//Ввод чисел в массив в диалоге с пользователем 
	a = input(n);

	//Выводим массив на экран
	cout << "Ваш массив: ";
	output(a, n);
	cout << endl;

	//Вводим заданное пользователем значение (функция "ch()")

	//Обработка массива чисел
	DataProc(a, n);

	return 0;
}
