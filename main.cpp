#include <iostream>
#include <vector>
#include <clocale>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    //Ввод данных. Задаём размер массива.
    int n;
    cout << "Размер массива: ";
    cin >> n;
    vector <int> a(n); // объявляем массив размером n

    //Ввод чисел в массив в диалоге с пользователем
    cout << "Введите свой массив чисел через пробел " << endl;
    for (int i = 0; i < n; i++) {
        cout << "Введите " << i + 1 << " число: ";
        cin >> a[i];
    }

    //Выводим массив на экран
    cout << "Ваш массив: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    //Вводим заданное пользователем значение
    int check;
    cout << "Введите заданное значение: ";
    cin >> check;

    //Обработка массива чисел
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] + a[j] == check) {
                cout << "Ваша пара чисел: " << "(" << a[i] << " , " << a[j] << ")" << endl;
            }
        }
    }
    return 0;
}